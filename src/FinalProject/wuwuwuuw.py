from std_msgs.msg import String
from rclpy.node import Node
import rclpy

class YourSubscriberNode(Node):
    def __init__(self):
        super().__init__('your_subscriber_node')
        self.command = None
        self.grasp_command_subscription = self.create_subscription(
            String,
            '/grasp_command',
            self.grasp_command_callback,
            10
        )

    def grasp_command_callback(self, msg):
        self.command = msg.data
        print("Received command:", self.command)

def main(args=None):
    rclpy.init(args=args)
    node = YourSubscriberNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
