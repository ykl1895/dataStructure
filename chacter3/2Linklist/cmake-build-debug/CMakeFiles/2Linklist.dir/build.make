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
CMAKE_SOURCE_DIR = E:\ClioneProject\chacter3\2Linklist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\ClioneProject\chacter3\2Linklist\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\2Linklist.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\2Linklist.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\2Linklist.dir\flags.make

CMakeFiles\2Linklist.dir\main.c.obj: CMakeFiles\2Linklist.dir\flags.make
CMakeFiles\2Linklist.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\ClioneProject\chacter3\2Linklist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/2Linklist.dir/main.c.obj"
	D:\VisualStudio2015\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\2Linklist.dir\main.c.obj /FdCMakeFiles\2Linklist.dir\ /FS -c E:\ClioneProject\chacter3\2Linklist\main.c
<<

CMakeFiles\2Linklist.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2Linklist.dir/main.c.i"
	D:\VisualStudio2015\VC\bin\cl.exe > CMakeFiles\2Linklist.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\ClioneProject\chacter3\2Linklist\main.c
<<

CMakeFiles\2Linklist.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2Linklist.dir/main.c.s"
	D:\VisualStudio2015\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\2Linklist.dir\main.c.s /c E:\ClioneProject\chacter3\2Linklist\main.c
<<

# Object files for target 2Linklist
2Linklist_OBJECTS = \
"CMakeFiles\2Linklist.dir\main.c.obj"

# External object files for target 2Linklist
2Linklist_EXTERNAL_OBJECTS =

2Linklist.exe: CMakeFiles\2Linklist.dir\main.c.obj
2Linklist.exe: CMakeFiles\2Linklist.dir\build.make
2Linklist.exe: CMakeFiles\2Linklist.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\ClioneProject\chacter3\2Linklist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 2Linklist.exe"
	"D:\clion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\2Linklist.dir --manifests  -- D:\VisualStudio2015\VC\bin\link.exe /nologo @CMakeFiles\2Linklist.dir\objects1.rsp @<<
 /out:2Linklist.exe /implib:2Linklist.lib /pdb:E:\ClioneProject\chacter3\2Linklist\cmake-build-debug\2Linklist.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\2Linklist.dir\build: 2Linklist.exe

.PHONY : CMakeFiles\2Linklist.dir\build

CMakeFiles\2Linklist.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2Linklist.dir\cmake_clean.cmake
.PHONY : CMakeFiles\2Linklist.dir\clean

CMakeFiles\2Linklist.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\ClioneProject\chacter3\2Linklist E:\ClioneProject\chacter3\2Linklist E:\ClioneProject\chacter3\2Linklist\cmake-build-debug E:\ClioneProject\chacter3\2Linklist\cmake-build-debug E:\ClioneProject\chacter3\2Linklist\cmake-build-debug\CMakeFiles\2Linklist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\2Linklist.dir\depend

