import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
   config = os.path.join(
      get_package_share_directory('witmotion_ros_driver'),
      'config',
      'params.yaml'
      )

   return LaunchDescription([
      Node(
         package='witmotion_ros_driver',
         executable='modbus_rtu_driver',
         namespace='',
         name='modbus_rtu_driver_node',
         parameters=[config]
      )
   ])