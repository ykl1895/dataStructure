# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\clion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\clion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\ClioneProject\chacter3\3StaticList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\ClioneProject\chacter3\3StaticList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\3StaticList.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\3StaticList.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\3StaticList.dir\flags.make

CMakeFiles\3StaticList.dir\main.c.obj: CMakeFiles\3StaticList.dir\flags.make
CMakeFiles\3StaticList.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\ClioneProject\chacter3\3StaticList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/3StaticList.dir/main.c.obj"
	D:\VisualStudio2015\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\3StaticList.dir\main.c.obj /FdCMakeFiles\3StaticList.dir\ /FS -c E:\ClioneProject\chacter3\3StaticList\main.c
<<

CMakeFiles\3StaticList.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/3StaticList.dir/main.c.i"
	D:\VisualStudio2015\VC\bin\cl.exe > CMakeFiles\3StaticList.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\ClioneProject\chacter3\3StaticList\main.c
<<

CMakeFiles\3StaticList.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/3StaticList.dir/main.c.s"
	D:\VisualStudio2015\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\3StaticList.dir\main.c.s /c E:\ClioneProject\chacter3\3StaticList\main.c
<<

# Object files for target 3StaticList
3StaticList_OBJECTS = \
"CMakeFiles\3StaticList.dir\main.c.obj"

# External object files for target 3StaticList
3StaticList_EXTERNAL_OBJECTS =

3StaticList.exe: CMakeFiles\3StaticList.dir\main.c.obj
3StaticList.exe: CMakeFiles\3StaticList.dir\build.make
3StaticList.exe: CMakeFiles\3StaticList.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\ClioneProject\chacter3\3StaticList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 3StaticList.exe"
	"D:\clion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\3StaticList.dir --manifests  -- D:\VisualStudio2015\VC\bin\link.exe /nologo @CMakeFiles\3StaticList.dir\objects1.rsp @<<
 /out:3StaticList.exe /implib:3StaticList.lib /pdb:E:\ClioneProject\chacter3\3StaticList\cmake-build-debug\3StaticList.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\3StaticList.dir\build: 3StaticList.exe

.PHONY : CMakeFiles\3StaticList.dir\build

CMakeFiles\3StaticList.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3StaticList.dir\cmake_clean.cmake
.PHONY : CMakeFiles\3StaticList.dir\clean

CMakeFiles\3StaticList.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\ClioneProject\chacter3\3StaticList E:\ClioneProject\chacter3\3StaticList E:\ClioneProject\chacter3\3StaticList\cmake-build-debug E:\ClioneProject\chacter3\3StaticList\cmake-build-debug E:\ClioneProject\chacter3\3StaticList\cmake-build-debug\CMakeFiles\3StaticList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\3StaticList.dir\depend

