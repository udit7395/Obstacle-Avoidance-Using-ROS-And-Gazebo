# Obstacle-Avoidance-Using-ROS-And-Gazebo

This is the final project for [Robocademy](http://robocademy.com/) ROS Course.
For this project we have to build a differential drive robot which can avoid obstacles. The robot design and other requirements can be found in this [PDF](assignment.pdf)

# Update  

This assignement was a fun learning experience as it touched multiple concepts in ROS like ros-messages, visuailization(rviz), simulations(gazebo) and many more. The problem statement currently is used at the [Society of Robotics and Automation(SRA)](https://github.com/SRA-VJTI), VJTI to introduce students to ROS. I remember writing the code for this project in one night just before the deadline, as I was working at that time. So the code is “decent” but could have been better. The students at [SRA](https://github.com/SRA-VJTI) have made these improvements, by adding their own perspective(some have integrated motion planning and mapping) to this assignment. You can find their unique approach below: 

- [Saurabh](https://github.com/Spnetic-5) - [https://github.com/Spnetic-5/Obstacle-Avoidance-Using-Ros-Gazebo](https://github.com/Spnetic-5/Obstacle-Avoidance-Using-Ros-Gazebo)
- [Sravan](https://github.com/SravanChittupalli) - [https://github.com/SravanChittupalli/Obstacle-Avoidance-Bot-Using-ROS](https://github.com/SravanChittupalli/Obstacle-Avoidance-Bot-Using-ROS)
- [Omkar](https://github.com/ombhilare999) - [https://github.com/ombhilare999/Object-Avoider-using-ROS-and-Gazebo](https://github.com/ombhilare999/Object-Avoider-using-ROS-and-Gazebo)
- [Saheti](https://github.com/Sahethi) - [https://github.com/Sahethi/obstacle-avoidance-robot](https://github.com/Sahethi/obstacle-avoidance-robot)
- [Tejal](https://github.com/Tejal-19) - [https://github.com/Tejal-19/Obstacle_avoidance-bot-using-ROS-and-GAZEBO](https://github.com/Tejal-19/Obstacle_avoidance-bot-using-ROS-and-GAZEBO)
- [Ninad](https://github.com/ninja3011) - [https://github.com/ninja3011/Obstacle-Avoidance-using-ROS-and-Gazebo](https://github.com/ninja3011/Obstacle-Avoidance-using-ROS-and-Gazebo)
- [Esha](https://github.com/esha0410) - [https://github.com/esha0410/Obstacle-avoidance-ros-gazebo/tree/master](https://github.com/esha0410/Obstacle-avoidance-ros-gazebo/tree/master)
- [Aryaman](https://github.com/Aryaman22102002) - [https://github.com/Aryaman22102002/Obstacle-Avoidance](https://github.com/Aryaman22102002/Obstacle-Avoidance)

Thanks for reading and have a great day!!!

This Project is now archived and will receive no further updates(1st September, 2021) 

## Getting Started

1. Clone this repository in the `src` folder of your `catkin` workspace
2. Run `catkin_make`
3. Launch your terminal and run the command `roslaunch exercise2 bot.launch`. 
This will launch and load the robot in the gazebo enviroment
4. In another terminal, run the command `rosrun exercise2 cmd_bot` to start the robot and begin the obstacle avoidance course.

## Prerequisites

* [ROS](http://wiki.ros.org/kinetic)  
* [Gazebo](http://wiki.ros.org/gazebo_ros_pkgs)


## Video

[![Obstacle-Avoidance-Using-ROS-And-Gazebo](http://img.youtube.com/vi/yoHwEvan2nE/0.jpg)](https://www.youtube.com/watch?v=yoHwEvan2nE "Obstacle-Avoidance-Using-ROS-And-Gazebo")

## To-Do / Improvements

* Use xacro to define the model to make it more readable and configurable

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
