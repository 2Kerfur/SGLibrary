# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/kerfur/Progs/clion/clion-2019.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/kerfur/Progs/clion/clion-2019.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kerfur/DEV/MY_GITHUB/SGLibrary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SGLibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SGLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SGLibrary.dir/flags.make

CMakeFiles/SGLibrary.dir/src/main.cpp.o: CMakeFiles/SGLibrary.dir/flags.make
CMakeFiles/SGLibrary.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SGLibrary.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGLibrary.dir/src/main.cpp.o -c /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/main.cpp

CMakeFiles/SGLibrary.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGLibrary.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/main.cpp > CMakeFiles/SGLibrary.dir/src/main.cpp.i

CMakeFiles/SGLibrary.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGLibrary.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/main.cpp -o CMakeFiles/SGLibrary.dir/src/main.cpp.s

CMakeFiles/SGLibrary.dir/src/window/Window.cpp.o: CMakeFiles/SGLibrary.dir/flags.make
CMakeFiles/SGLibrary.dir/src/window/Window.cpp.o: ../src/window/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SGLibrary.dir/src/window/Window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGLibrary.dir/src/window/Window.cpp.o -c /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/Window.cpp

CMakeFiles/SGLibrary.dir/src/window/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGLibrary.dir/src/window/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/Window.cpp > CMakeFiles/SGLibrary.dir/src/window/Window.cpp.i

CMakeFiles/SGLibrary.dir/src/window/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGLibrary.dir/src/window/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/Window.cpp -o CMakeFiles/SGLibrary.dir/src/window/Window.cpp.s

CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.o: CMakeFiles/SGLibrary.dir/flags.make
CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.o: ../src/window/ui/Button.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.o -c /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/ui/Button.cpp

CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/ui/Button.cpp > CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.i

CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/ui/Button.cpp -o CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.s

CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.o: CMakeFiles/SGLibrary.dir/flags.make
CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.o: ../src/window/ui/TextLabel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.o -c /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/ui/TextLabel.cpp

CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/ui/TextLabel.cpp > CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.i

CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kerfur/DEV/MY_GITHUB/SGLibrary/src/window/ui/TextLabel.cpp -o CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.s

# Object files for target SGLibrary
SGLibrary_OBJECTS = \
"CMakeFiles/SGLibrary.dir/src/main.cpp.o" \
"CMakeFiles/SGLibrary.dir/src/window/Window.cpp.o" \
"CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.o" \
"CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.o"

# External object files for target SGLibrary
SGLibrary_EXTERNAL_OBJECTS =

SGLibrary: CMakeFiles/SGLibrary.dir/src/main.cpp.o
SGLibrary: CMakeFiles/SGLibrary.dir/src/window/Window.cpp.o
SGLibrary: CMakeFiles/SGLibrary.dir/src/window/ui/Button.cpp.o
SGLibrary: CMakeFiles/SGLibrary.dir/src/window/ui/TextLabel.cpp.o
SGLibrary: CMakeFiles/SGLibrary.dir/build.make
SGLibrary: CMakeFiles/SGLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable SGLibrary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SGLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SGLibrary.dir/build: SGLibrary

.PHONY : CMakeFiles/SGLibrary.dir/build

CMakeFiles/SGLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SGLibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SGLibrary.dir/clean

CMakeFiles/SGLibrary.dir/depend:
	cd /home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kerfur/DEV/MY_GITHUB/SGLibrary /home/kerfur/DEV/MY_GITHUB/SGLibrary /home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug /home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug /home/kerfur/DEV/MY_GITHUB/SGLibrary/cmake-build-debug/CMakeFiles/SGLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SGLibrary.dir/depend

