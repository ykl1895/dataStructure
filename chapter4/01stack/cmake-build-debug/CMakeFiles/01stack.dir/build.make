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
CMAKE_SOURCE_DIR = /cygdrive/e/ClioneProject/chapter4/01stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/ClioneProject/chapter4/01stack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/01stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/01stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01stack.dir/flags.make

CMakeFiles/01stack.dir/main.cpp.o: CMakeFiles/01stack.dir/flags.make
CMakeFiles/01stack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/ClioneProject/chapter4/01stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/01stack.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/01stack.dir/main.cpp.o -c /cygdrive/e/ClioneProject/chapter4/01stack/main.cpp

CMakeFiles/01stack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01stack.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/e/ClioneProject/chapter4/01stack/main.cpp > CMakeFiles/01stack.dir/main.cpp.i

CMakeFiles/01stack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01stack.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/e/ClioneProject/chapter4/01stack/main.cpp -o CMakeFiles/01stack.dir/main.cpp.s

# Object files for target 01stack
01stack_OBJECTS = \
"CMakeFiles/01stack.dir/main.cpp.o"

# External object files for target 01stack
01stack_EXTERNAL_OBJECTS =

01stack.exe: CMakeFiles/01stack.dir/main.cpp.o
01stack.exe: CMakeFiles/01stack.dir/build.make
01stack.exe: CMakeFiles/01stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/ClioneProject/chapter4/01stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 01stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/01stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01stack.dir/build: 01stack.exe

.PHONY : CMakeFiles/01stack.dir/build

CMakeFiles/01stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/01stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/01stack.dir/clean

CMakeFiles/01stack.dir/depend:
	cd /cygdrive/e/ClioneProject/chapter4/01stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/ClioneProject/chapter4/01stack /cygdrive/e/ClioneProject/chapter4/01stack /cygdrive/e/ClioneProject/chapter4/01stack/cmake-build-debug /cygdrive/e/ClioneProject/chapter4/01stack/cmake-build-debug /cygdrive/e/ClioneProject/chapter4/01stack/cmake-build-debug/CMakeFiles/01stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/01stack.dir/depend

