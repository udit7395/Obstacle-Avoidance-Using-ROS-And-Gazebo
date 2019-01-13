# Obstacle-Avoidance-Using-ROS-And-Gazebo

This is the final project for [Robocademy](http://robocademy.com/) ROS Course.
For this project we have to build a differential drive robot which can avoid obstacles. The robot design and other requirements can be found in this [PDF](assignment.pdf)

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

[![Obstacle-Avoidance-Using-ROS-And-Gazebo](http://img.youtube.com/vi/yoHwEvan2nE/0.jpg)](https://www.youtube.com/watch?v=yoHwEvan2nE "Obstacle-Avoidance-Using-ROS-And-Gazebo") -->

## To-Do / Improvements

* Use xacro to define the model to make it more readable and configurable

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details