# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /cygdrive/c/Users/26989/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/26989/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/ClioneProject/leetcode/876middleNode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/ClioneProject/leetcode/876middleNode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/876middleNode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/876middleNode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/876middleNode.dir/flags.make

CMakeFiles/876middleNode.dir/main.cpp.o: CMakeFiles/876middleNode.dir/flags.make
CMakeFiles/876middleNode.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/ClioneProject/leetcode/876middleNode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/876middleNode.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/876middleNode.dir/main.cpp.o -c /cygdrive/e/ClioneProject/leetcode/876middleNode/main.cpp

CMakeFiles/876middleNode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/876middleNode.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/e/ClioneProject/leetcode/876middleNode/main.cpp > CMakeFiles/876middleNode.dir/main.cpp.i

CMakeFiles/876middleNode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/876middleNode.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/e/ClioneProject/leetcode/876middleNode/main.cpp -o CMakeFiles/876middleNode.dir/main.cpp.s

# Object files for target 876middleNode
876middleNode_OBJECTS = \
"CMakeFiles/876middleNode.dir/main.cpp.o"

# External object files for target 876middleNode
876middleNode_EXTERNAL_OBJECTS =

876middleNode.exe: CMakeFiles/876middleNode.dir/main.cpp.o
876middleNode.exe: CMakeFiles/876middleNode.dir/build.make
876middleNode.exe: CMakeFiles/876middleNode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/ClioneProject/leetcode/876middleNode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 876middleNode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/876middleNode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/876middleNode.dir/build: 876middleNode.exe

.PHONY : CMakeFiles/876middleNode.dir/build

CMakeFiles/876middleNode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/876middleNode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/876middleNode.dir/clean

CMakeFiles/876middleNode.dir/depend:
	cd /cygdrive/e/ClioneProject/leetcode/876middleNode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/ClioneProject/leetcode/876middleNode /cygdrive/e/ClioneProject/leetcode/876middleNode /cygdrive/e/ClioneProject/leetcode/876middleNode/cmake-build-debug /cygdrive/e/ClioneProject/leetcode/876middleNode/cmake-build-debug /cygdrive/e/ClioneProject/leetcode/876middleNode/cmake-build-debug/CMakeFiles/876middleNode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/876middleNode.dir/depend
