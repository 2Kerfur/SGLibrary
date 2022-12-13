cmake_minimum_required (VERSION 3.8)

project (SGL_Sandbox)


add_executable(${PROJECT_NAME} 
	"src/SGL.cpp"
 "src/SGL.h" "src/window/linux/window.h" "src/window/linux/window.cpp" "src/window/windows/window.h" "src/window/windows/window.cpp")

#include_directories(${CMAKE_SOURCE_DIR}/library) # include files from ProjectB

#target_link_directories(${PROJECT_NAME}
#	PRIVATE out/build/x64-Debug

#)

#target_link_libraries(${PROJECT_NAME} SGLib.dll)

