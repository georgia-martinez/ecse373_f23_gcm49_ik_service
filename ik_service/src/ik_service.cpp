#include "ros/ros.h"
#include "ik_service/PoseIK.h"
#include "ur_kinematics/ur_kin.h"

// Service function
bool pose_ik(ik_service::PoseIK::Request &req, ik_service::PoseIK::Response &res) {
	ROS_INFO("Pose Information...");
	res.num_sols = -1;
	return true;
}

int main(int argc, char **argv) {

	ros::init(argc, argv, "ik_service");
    ros::NodeHandle n;

	// Service node
    ros::ServiceServer service = n.advertiseService("pose_ik", pose_ik);

    ros::spin();

    return 0;
}
