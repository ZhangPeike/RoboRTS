//
// Created by kirk on 18-1-29.
//
#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "fake_driver");
  ros::NodeHandle nh;
  ros::Publisher publisher = nh.advertise<geometry_msgs::Twist>("/cmd_vel", 1);
  geometry_msgs::Twist base_cmd;
  base_cmd.linear.x = 3;
  base_cmd.linear.y = 0.3;
  base_cmd.linear.z = 0.0;
  base_cmd.angular.x = 0.3;
  base_cmd.angular.y = 0.0;
  base_cmd.angular.z = 0.0;
  ros::Rate rate(3);
  while(ros::ok()) {
    rate.sleep();
    publisher.publish(base_cmd);
    std::cout<<"Sending cmd_vel ok."<<std::endl;
  }
  return 0;
}
