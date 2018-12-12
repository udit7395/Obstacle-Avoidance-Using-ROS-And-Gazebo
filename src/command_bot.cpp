#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/LaserScan.h"
#include "geometry_msgs/Twist.h"

float angY, angZ, linX;

void laserScanCallback(const sensor_msgs::LaserScan laser)
{
  //ROS_INFO("size[%d]: ", laser.ranges.size());
  for (unsigned int index = 0; index < laser.ranges.size(); index++) {
    //ROS_INFO("ranges[%f]: ", laser.ranges[i]);
    if (laser.ranges[index] > 1 && laser.ranges[index] < 3) {
      if (index > 6) {
        //obstacle detected on left turn right/clockwise
        ROS_INFO("TURN RIGHT");
        linX = 0.05f;
        angY = 1.0f;
        angZ = 1.0f;
      }
      else {
        //obstacle detected on right turn left/anticlockwise
        ROS_INFO("TURN LEFT");
        linX = 0.05f;
        angY = 1.0f;
        angZ = -1.0f;
      }
    }
    else {
      ROS_INFO("GO STRAIGHT");
      linX = 0.15f;
      angY = 0.0f;
      angZ = 0.0f;
    }
  }
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "hLaserReader");
  ros::NodeHandle nodeHandler;
  ros::Subscriber hokuyoSubscriber = nodeHandler.subscribe("/mybot/laser/scan", 1, laserScanCallback);
  ros::Publisher pubVelocity = nodeHandler.advertise<geometry_msgs::Twist>("/cmd_vel", 10);

  ros::Rate rate(10);
  linX = 0.0f;
  angY = 0.0f;
  angZ = 0.0f;
  while (ros::ok()) {
    geometry_msgs::Twist msg;
    msg.linear.x = -linX;
    msg.angular.y = angY;
    msg.angular.z = angZ;

    pubVelocity.publish(msg);
    rate.sleep();
    ros::spinOnce();
  }

  ros::spin();

  return 0;
}