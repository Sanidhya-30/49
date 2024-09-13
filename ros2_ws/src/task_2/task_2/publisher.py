import rclpy
from rclpy.node import Node
from task_2_interface.msg import JointData
import random

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('mini_publisher')
        self.publisher_ = self.create_publisher(JointData, 'joint_topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = random.randrange(0, 20, 1)

    def timer_callback(self):
        msg = JointData()
        msg.vel = 1.0
        msg.center.z = float(self.i)
        msg.center.y = float(self.i)
        msg.center.x = float(self.i)
        self.publisher_.publish(msg)
        log_msg = f"Publishing: vel={msg.vel}, center=({msg.center.x}, {msg.center.y}, {msg.center.z})"
        self.get_logger().info(log_msg)  # Convert the message to a string
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    minimal_publisher = MinimalPublisher()
    rclpy.spin(minimal_publisher)
    minimal_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()