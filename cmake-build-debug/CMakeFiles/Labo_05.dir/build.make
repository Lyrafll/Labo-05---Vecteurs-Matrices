# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\dev\c++\Labo 05"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\dev\c++\Labo 05\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Labo_05.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Labo_05.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Labo_05.dir/flags.make

CMakeFiles/Labo_05.dir/main.cpp.obj: CMakeFiles/Labo_05.dir/flags.make
CMakeFiles/Labo_05.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\dev\c++\Labo 05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Labo_05.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Labo_05.dir\main.cpp.obj -c "C:\dev\c++\Labo 05\main.cpp"

CMakeFiles/Labo_05.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Labo_05.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\dev\c++\Labo 05\main.cpp" > CMakeFiles\Labo_05.dir\main.cpp.i

CMakeFiles/Labo_05.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Labo_05.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\dev\c++\Labo 05\main.cpp" -o CMakeFiles\Labo_05.dir\main.cpp.s

CMakeFiles/Labo_05.dir/lib.cpp.obj: CMakeFiles/Labo_05.dir/flags.make
CMakeFiles/Labo_05.dir/lib.cpp.obj: ../lib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\dev\c++\Labo 05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Labo_05.dir/lib.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Labo_05.dir\lib.cpp.obj -c "C:\dev\c++\Labo 05\lib.cpp"

CMakeFiles/Labo_05.dir/lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Labo_05.dir/lib.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\dev\c++\Labo 05\lib.cpp" > CMakeFiles\Labo_05.dir\lib.cpp.i

CMakeFiles/Labo_05.dir/lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Labo_05.dir/lib.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\dev\c++\Labo 05\lib.cpp" -o CMakeFiles\Labo_05.dir\lib.cpp.s

# Object files for target Labo_05
Labo_05_OBJECTS = \
"CMakeFiles/Labo_05.dir/main.cpp.obj" \
"CMakeFiles/Labo_05.dir/lib.cpp.obj"

# External object files for target Labo_05
Labo_05_EXTERNAL_OBJECTS =

Labo_05.exe: CMakeFiles/Labo_05.dir/main.cpp.obj
Labo_05.exe: CMakeFiles/Labo_05.dir/lib.cpp.obj
Labo_05.exe: CMakeFiles/Labo_05.dir/build.make
Labo_05.exe: CMakeFiles/Labo_05.dir/linklibs.rsp
Labo_05.exe: CMakeFiles/Labo_05.dir/objects1.rsp
Labo_05.exe: CMakeFiles/Labo_05.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\dev\c++\Labo 05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Labo_05.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Labo_05.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Labo_05.dir/build: Labo_05.exe

.PHONY : CMakeFiles/Labo_05.dir/build

CMakeFiles/Labo_05.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Labo_05.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Labo_05.dir/clean

CMakeFiles/Labo_05.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\dev\c++\Labo 05" "C:\dev\c++\Labo 05" "C:\dev\c++\Labo 05\cmake-build-debug" "C:\dev\c++\Labo 05\cmake-build-debug" "C:\dev\c++\Labo 05\cmake-build-debug\CMakeFiles\Labo_05.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Labo_05.dir/depend

