import math
import struct

import rclpy
from rclpy.node import Node
from std_msgs.msg import String, UInt8MultiArray
from sensor_msgs.msg import Imu, MagneticField


from pymodbus.client import ModbusSerialClient


class ModbusRTUMaster(Node):

    def __init__(self):
        super().__init__('modbus_rtu_master')
        
        self.declare_parameter('id', 0x50)
        self.declare_parameter('port', '/dev/ttyUSB0')
        self.declare_parameter('baudrate', 230400)
        self.declare_parameter('frame_link', 'external_imu_link')

        self.__id = self.get_parameter('id').get_parameter_value().integer_value
        self.__port = self.get_parameter('port').get_parameter_value().string_value
        self.__baudrate = self.get_parameter('baudrate').get_parameter_value().integer_value
        self.__frame_link = self.get_parameter('frame_link').get_parameter_value().string_value
        
        self.get_logger().info('WitMotion ModbusRTU Driver')
        
        self.__imu_msg = Imu()
        self.__imu_msg.header.frame_id = self.__frame_link

        self.__imu_publisher_ = self.create_publisher(Imu, 'external_imu', 1)
        
        try:
            self.__modbus_client = ModbusSerialClient(method='rtu', port=self.__port, baudrate=self.__baudrate, timeout=1)
            self.__modbus_client.connect()
        except Exception as e:
            self.get_logger().warn(e)

        timer_period = 0.02
        self.timer = self.create_timer(timer_period, self._timer_callback)

    def _timer_callback(self):
        
        response = self.__modbus_client.read_holding_registers(0x34, 6, self.__id)
        # self.get_logger().warn(response)
        if response:
            # value_array = [struct.unpack('>H', response.registers[i:i+2])[0] for i in range(0, len(response.registers), 2)]
            
            # 加速度，角速度，磁场帧
            if len(response.registers) == 6:
                v=[0]*6
                for i in range(0,6):
                    if (response.registers[i]>32767):
                        v[i]=response.registers[i]-65536
                    else:
                        v[i]=response.registers[i]

                # TODO: 需要将重力加速度作为一个变量输入，便于用户查表给出真值
                acceleration = [v[i] / 32768.0 * 16 * 9.8 for i in range(0, 3)]
                angular_velocity = [v[i] / 32768.0 * 2000 * math.pi / 180 for i in range(3, 6)]

                self.__imu_msg = Imu()

                self.__imu_msg.angular_velocity.x = angular_velocity[0]
                self.__imu_msg.angular_velocity.y = angular_velocity[1]
                self.__imu_msg.angular_velocity.z = angular_velocity[2]
                self.__imu_msg.linear_acceleration.x = acceleration[0]
                self.__imu_msg.linear_acceleration.y = acceleration[1]
                self.__imu_msg.linear_acceleration.z = acceleration[2]

                self.__imu_msg.header.stamp =self.get_clock().now().to_msg()
                self.__imu_msg.header.frame_id = self.__frame_link
                self.__imu_publisher_.publish(self.__imu_msg)

        # if not self.__basic_updated:
        #     # 加速度，角速度和磁力计数据
        #     msg = UInt8MultiArray()
        #     msg.data = self._generate_modbus_request(0x34, 12)
        #     self.__modbus_publisher.publish(msg)
        # elif not self.__orient_updated:
        #     # 四元数数据
        #     msg = UInt8MultiArray()
        #     msg.data = self._generate_modbus_request(0x51, 4)
        #     self.__modbus_publisher.publish(msg)
        # else:
        #     # 更新时间戳
        #     current_time = self.get_clock().now().to_msg()
        #     self.__imu_msg.header.stamp = current_time
        #     # self.__magentic_msg.header.stamp = current_time

        #     # 发送帧
        #     self.__imu_publisher_.publish(self.__imu_msg)
        #     # self.__magnetic_publisher.publish(self.__magentic_msg)
            
        #     # 重置更新符号位
        #     self.__basic_updated = False
        #     self.__orient_updated = False

    def _modbus_callback(self, msg):
        # self.get_logger().info('Received: "%s"' % msg)

        if msg.data[0] != self.__id or msg.data[1] != 0x03:
            self.get_logger().warn('unknown data')
            return

        # TODO: 需要追加长度校验和CRC校验，并且将不符合的情况打印出来

        # 抛去modbus协议头（从机地址，类型和长度），以及末尾的CRC校验位，如果数值过小，则认为不是有效帧
        register_value_array = msg.data[3:-2]
        if len(register_value_array) not in (8, 24):
            return

        value_array = [struct.unpack('>H', register_value_array[i:i+2])[0] for i in range(0, len(register_value_array), 2)]
        
        # 加速度，角速度，磁场帧
        if len(value_array) == 12:
            v=[0]*12
            for i in range(0,12):
                if (value_array[i]>32767):
                    v[i]=value_array[i]-65536
                else:
                    v[i]=value_array[i]

            # TODO: 需要将重力加速度作为一个变量输入，便于用户查表给出真值
            acceleration = [v[i] / 32768.0 * 16 * 9.8 for i in range(0, 3)]
            angular_velocity = [v[i] / 32768.0 * 2000 * math.pi / 180 for i in range(3, 6)]
            magnetometer = v[6:9]
            angle_degree = [v[i] / 32768.0 * 180 for i in range(9, 12)]

            # 磁力计和IMU数据使用相同的时间戳
            current_time = rclpy.time.Time().to_msg()

            self.__imu_msg = Imu()
            self.__imu_msg.header.stamp = current_time
            self.__imu_msg.header.frame_id = self.__frame_link
            self.__imu_msg.angular_velocity.x = angular_velocity[0]
            self.__imu_msg.angular_velocity.y = angular_velocity[1]
            self.__imu_msg.angular_velocity.z = angular_velocity[2]
            self.__imu_msg.linear_acceleration.x = acceleration[0]
            self.__imu_msg.linear_acceleration.y = acceleration[1]
            self.__imu_msg.linear_acceleration.z = acceleration[2]

            self.__magentic_msg = MagneticField()
            self.__magentic_msg.header.stamp = current_time
            self.__magentic_msg.header.frame_id = self.__frame_link
            self.__magentic_msg.magnetic_field.x = float(magnetometer[0])
            self.__magentic_msg.magnetic_field.y = float(magnetometer[1])
            self.__magentic_msg.magnetic_field.z = float(magnetometer[2])
            self.__basic_updated = True
        elif len(value_array) == 4:
            # 四元数帧 
            v=[0]*4
            for i in range(0,4):
                if (value_array[i]>32767):
                    v[i]=value_array[i]-65536
                else:
                    v[i]=value_array[i]
            
            orientation = [v[i] / 32768.0 for i in range(0, 4)]
            self.__imu_msg.orientation.w = orientation[0]
            self.__imu_msg.orientation.x = orientation[1]
            self.__imu_msg.orientation.y = orientation[2]
            self.__imu_msg.orientation.z = orientation[3]
            self.__orient_updated = True

    def _generate_modbus_request(self, address, length):
        # Constructing the message
        message = bytearray()
        message.append(self.__id)
        message.append(0x03)  # Function code for reading holding registers
        message.extend(address.to_bytes(2, byteorder='big'))
        message.extend(length.to_bytes(2, byteorder='big'))

        # Calculate CRC16
        crc = self._crc16(message)
        message.extend(crc.to_bytes(2, byteorder='little'))  # Modbus uses little-endian for CRC

        return message

    def _crc16(self, data: bytearray):
        crc = 0xFFFF
        for byte in data:
            crc ^= byte
            for _ in range(8):
                if crc & 0x0001:
                    crc >>= 1
                    crc ^= 0xA001
                else:
                    crc >>= 1
        return crc


def main(args=None):
    rclpy.init(args=args)

    modbus_rtu_master = ModbusRTUMaster()

    rclpy.spin(modbus_rtu_master)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    modbus_rtu_master.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
