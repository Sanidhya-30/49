from task_2_interface.srv import JointData
import rclpy
from rclpy.node import Node


class Mini_Service(Node):

    def __init__(self):
        super().__init__('mini_service')
        self.srv = self.create_service(JointData, 'CheckSum', self.CheckSum)

    def CheckSum(self, request, response):
        # sum = request.x + request.y + request.z
        self.get_logger().info(f'Incoming request:\nx: {request.x}, y: {request.y}, z: {request.z}')
        if request.x + request.y + request.z > 0:
            response.valid = True
        else:
            response.valid = False
        return response

def main():
    rclpy.init()
    mini_service = Mini_Service()
    rclpy.spin(mini_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()