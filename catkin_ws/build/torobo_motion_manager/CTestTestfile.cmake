# CMake generated Testfile for 
# Source directory: /home/aokilablinuxws/catkin_ws/src/torobo_robot/torobo_motion_manager
# Build directory: /home/aokilablinuxws/catkin_ws/build/torobo_motion_manager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_torobo_motion_manager_rostest_test_launch_torobo_motion_manager_service.test "/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/test_results/torobo_motion_manager/rostest-test_launch_torobo_motion_manager_service.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/aokilablinuxws/catkin_ws/src/torobo_robot/torobo_motion_manager --package=torobo_motion_manager --results-filename test_launch_torobo_motion_manager_service.xml --results-base-dir \"/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/test_results\" /home/aokilablinuxws/catkin_ws/src/torobo_robot/torobo_motion_manager/test/launch/torobo_motion_manager_service.test ")
add_test(_ctest_torobo_motion_manager_rostest_test_launch_arm_motion_manager_action.test "/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/test_results/torobo_motion_manager/rostest-test_launch_arm_motion_manager_action.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/aokilablinuxws/catkin_ws/src/torobo_robot/torobo_motion_manager --package=torobo_motion_manager --results-filename test_launch_arm_motion_manager_action.xml --results-base-dir \"/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/test_results\" /home/aokilablinuxws/catkin_ws/src/torobo_robot/torobo_motion_manager/test/launch/arm_motion_manager_action.test ")
add_test(_ctest_torobo_motion_manager_rostest_test_launch_humanoid_motion_manager_action.test "/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/test_results/torobo_motion_manager/rostest-test_launch_humanoid_motion_manager_action.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/aokilablinuxws/catkin_ws/src/torobo_robot/torobo_motion_manager --package=torobo_motion_manager --results-filename test_launch_humanoid_motion_manager_action.xml --results-base-dir \"/home/aokilablinuxws/catkin_ws/build/torobo_motion_manager/test_results\" /home/aokilablinuxws/catkin_ws/src/torobo_robot/torobo_motion_manager/test/launch/humanoid_motion_manager_action.test ")
subdirs("gtest")
