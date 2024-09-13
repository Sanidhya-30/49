from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    Yapper = Node(
        package= 'task_1',
        executable= 'talker',
        name='yapper'
    )

    Dapper = Node(
        package= 'task_1',
        executable= 'listener',
        name='dapper'
    )

    launch_description = LaunchDescription([
        Yapper,
        Dapper,
    ])
    
    return launch_description