这个命令是打开外设
ros2 launch iqr_tb4_bringup bringup.launch.py

这个命令是打开相机的
ros2 launch ros2_aruco aruco_recognition.launch.py 

这个命令是让相机下降的
ros2 topic pub /pan_tilt_cmd_deg pan_tilt_msgs/msg/PanTiltCmdDeg "yaw: 0.0
pitch: 10.0
speed: 10"

这个命令是跑导航的

# ros2 run nav2_map_server map_server --ros-args -p yaml_filename:=map.yaml

 ros2 launch iqr_tb4_navigation localization.launch.py map:=map.yaml

ros2 launch iqr_tb4_navigation nav2.launch.py


#这个是搞可视化的
sudo systemctl stop gdm3

sudo /usr/NX/bin/nxserver --restart
