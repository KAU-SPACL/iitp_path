#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <std_srvs/Empty.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Quaternion.h>
#include <ros/time.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/PointField.h>
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/Header.h>
#include <std_msgs/MultiArrayDimension.h>
#include <std_msgs/MultiArrayLayout.h>
#include <std_srvs/EmptyRequest.h>
#include <std_srvs/EmptyResponse.h>
#include "optimal_path_t2_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_Point const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr);

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_Pose const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_Pose* busPtr, geometry_msgs::Pose const* msgPtr);

void convertFromBus(geometry_msgs::PoseStamped* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped* busPtr, geometry_msgs::PoseStamped const* msgPtr);

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_Quaternion const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_Quaternion* busPtr, geometry_msgs::Quaternion const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_optimal_path_t2_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(sensor_msgs::PointCloud2* msgPtr, SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2* busPtr, sensor_msgs::PointCloud2 const* msgPtr);

void convertFromBus(sensor_msgs::PointField* msgPtr, SL_Bus_optimal_path_t2_sensor_msgs_PointField const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_sensor_msgs_PointField* busPtr, sensor_msgs::PointField const* msgPtr);

void convertFromBus(std_msgs::Float32MultiArray* msgPtr, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray* busPtr, std_msgs::Float32MultiArray const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_optimal_path_t2_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);

void convertFromBus(std_msgs::MultiArrayDimension* msgPtr, SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension* busPtr, std_msgs::MultiArrayDimension const* msgPtr);

void convertFromBus(std_msgs::MultiArrayLayout* msgPtr, SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout* busPtr, std_msgs::MultiArrayLayout const* msgPtr);

void convertFromBus(std_srvs::EmptyRequest* msgPtr, SL_Bus_optimal_path_t2_std_srvs_EmptyRequest const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_std_srvs_EmptyRequest* busPtr, std_srvs::EmptyRequest const* msgPtr);

void convertFromBus(std_srvs::EmptyResponse* msgPtr, SL_Bus_optimal_path_t2_std_srvs_EmptyResponse const* busPtr);
void convertToBus(SL_Bus_optimal_path_t2_std_srvs_EmptyResponse* busPtr, std_srvs::EmptyResponse const* msgPtr);


#endif
