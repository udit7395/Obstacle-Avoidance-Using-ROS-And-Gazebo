# %Tag(FULLTEXT)%
cmake_minimum_required(VERSION 2.8.3)
project(exercise2)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg sensor_msgs geometry_msgs)

## Declare ROS messages and services

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})
## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(cmd_bot src/command_bot.cpp)
target_link_libraries(cmd_bot ${catkin_LIBRARIES})
#add_dependencies(cmd_bot beginner_tutorials_generate_messages_cpp)

# %EndTag(FULLTEXT)%