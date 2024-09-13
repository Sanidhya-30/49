from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Start the Publisher (talker) node
        Node(
            package='task_2',
            executable='talker',
            name='publisher_node',
            output='screen'
        ),
        # Start the Service (service) node
        Node(
            package='task_2',
            executable='service',
            name='service_node',
            output='screen'
        ),
    ])

