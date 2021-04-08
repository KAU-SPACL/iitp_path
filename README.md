# iitp_path
- - -
## 3D A*
Subscribe pointcloud data, position and publish coordinates of path
Main ROS topic : /rtabmap/cloud_map, /rtabmap/odom => /optimal_path_x, /optimal_path_y, /optimal_path_z
![optimal_path](https://user-images.githubusercontent.com/41814103/113944873-35a0ed80-9840-11eb-8dfa-bef1f1c3e449.png)

Guidance
### ai_guidance_depth_hz50_200917
Subscribe (x, y, z) coordinates of the path points and publish setpoint of multicopter   
Main ROS topic : /optimal_path_x, y, z => mavros/setpoint_position/local
![ai_guidance_dpth_hz50_200917](https://user-images.githubusercontent.com/41814103/113669376-a2a46e00-96ee-11eb-834e-614c59f4050a.png)

