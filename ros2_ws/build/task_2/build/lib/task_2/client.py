import sys
from task_2_interface.srv import JointData
import rclpy
from rclpy.node import Node

class MiniClientAsync(Node):

    def __init__(self):
        super().__init__('mini_client')
        self.cli = self.create_client(JointData, 'CheckSum')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = JointData.Request()

    def send_request(self, x, y, z):
        self.req.x = x
        self.req.y = y
        self.req.z = z
        return self.cli.call_async(self.req)


def main():
    rclpy.init()
    mini_client = MiniClientAsync()
    future = mini_client.send_request(float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]))
    rclpy.spin_until_future_complete(mini_client, future)
    response = future.result()
    mini_client.get_logger().info(f'Result of CheckSum is: {response.valid}')

    mini_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()