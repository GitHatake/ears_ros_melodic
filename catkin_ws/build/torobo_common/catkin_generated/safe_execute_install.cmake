execute_process(COMMAND "/home/aokilablinuxws/catkin_ws/build/torobo_common/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/aokilablinuxws/catkin_ws/build/torobo_common/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
