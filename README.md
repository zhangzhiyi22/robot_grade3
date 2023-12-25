# 项目指南

本文档提供了项目中使用的各种命令的详细说明。

## 启动设备

要启动外设，请运行以下命令：


ros2 launch iqr_tb4_bringup bringup.launch.py


## 相机操作

### 打开相机

运行以下命令来启动相机：


ros2 launch ros2_aruco aruco_recognition.launch.py 

### 调整相机角度

要使相机下降，请使用以下命令：


ros2 topic pub /pan_tilt_cmd_deg pan_tilt_msgs/msg/PanTiltCmdDeg "yaw: 0.0
pitch: 10.0
speed: 10"


## 导航

### 运行导航功能

使用以下命令来运行导航功能：





 ros2 launch iqr_tb4_navigation localization.launch.py map:=map.yaml

ros2 launch iqr_tb4_navigation nav2.launch.py


## 可视化操作

为了执行nomashine可视化操作，请按顺序运行以下命令：


sudo systemctl stop gdm3

sudo /usr/NX/bin/nxserver --restart
