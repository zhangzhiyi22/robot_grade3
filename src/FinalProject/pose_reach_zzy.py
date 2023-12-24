from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
import rclpy
from rclpy.duration import Duration



def navigate_to_pose(navigator, pose):
    """
    导航到指定的位姿，并返回是否成功。
    """
    navigator.goToPose(pose)

    i = 0
    while not navigator.isTaskComplete():
        i += 1
        feedback = navigator.getFeedback()
        if feedback and i % 5 == 0:
            print(
                'Estimated time of arrival: '
                + '{0:.0f}'.format(
                    Duration.from_msg(feedback.estimated_time_remaining).nanoseconds
                    / 1e9
                )
                + ' seconds.'
            )
            if Duration.from_msg(feedback.navigation_time) > Duration(seconds=600.0):
                navigator.cancelTask()

    result = navigator.getResult()
    return result == TaskResult.SUCCEEDED

def main():
    rclpy.init()
    navigator = BasicNavigator()
    #navigator.setGoalTolerance(linear_tolerance=0.1, angular_tolerance=0.1, path_tolerance=0.2)

    # 设置初始位姿
    initial_pose = PoseStamped()
    initial_pose.header.frame_id = 'map'
    initial_pose.header.stamp = navigator.get_clock().now().to_msg()
    initial_pose.pose.position.x = 0.27
    initial_pose.pose.position.y = -0.38
    
    # initial_pose.pose.orientation.z = 1.0
    # initial_pose.pose.orientation.w = 0.0
    
    
    initial_pose.pose.orientation.z = -0.7071
    initial_pose.pose.orientation.w = 0.7071


    navigator.setInitialPose(initial_pose)
    navigator.lifecycleStartup()
    navigator.waitUntilNav2Active()

    # 定义A点和B点
    a_pose = PoseStamped()
    a_pose.header.frame_id = 'map'
    a_pose.header.stamp = navigator.get_clock().now().to_msg()
    a_pose.pose.position.x = 0.32
    a_pose.pose.position.y = -3.2
    a_pose.pose.orientation.z = 0.3
    a_pose.pose.orientation.w = 0.95

    b_pose = PoseStamped()
    b_pose.header.frame_id = 'map'
    b_pose.header.stamp = navigator.get_clock().now().to_msg()
    b_pose.pose.position.x = 2.7
    b_pose.pose.position.y = -3.2
    b_pose.pose.orientation.z = 0.3
    b_pose.pose.orientation.w = 0.95

    # 从起点到A点
    if navigate_to_pose(navigator, a_pose):
        print("成功到达A点")
    else:
        print("导航到A点失败")

    # 从A点到B点
    if navigate_to_pose(navigator, b_pose):
        print("成功到达B点")
    else:
        print("导航到B点失败")

    # 从B点返回起点
    if navigate_to_pose(navigator, initial_pose):
        print("成功返回起点")
    else:
        print("返回起点失败")

    rclpy.shutdown()

if __name__ == '__main__':
    main()
