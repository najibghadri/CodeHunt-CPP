# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/najib/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/najib/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/najib/Documents/CPP11/CodeHunt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/najib/Documents/CPP11/CodeHunt/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CodeHunt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CodeHunt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CodeHunt.dir/flags.make

CMakeFiles/CodeHunt.dir/levels/levels.cpp.o: CMakeFiles/CodeHunt.dir/flags.make
CMakeFiles/CodeHunt.dir/levels/levels.cpp.o: ../levels/levels.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/najib/Documents/CPP11/CodeHunt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodeHunt.dir/levels/levels.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeHunt.dir/levels/levels.cpp.o -c /home/najib/Documents/CPP11/CodeHunt/levels/levels.cpp

CMakeFiles/CodeHunt.dir/levels/levels.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeHunt.dir/levels/levels.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/najib/Documents/CPP11/CodeHunt/levels/levels.cpp > CMakeFiles/CodeHunt.dir/levels/levels.cpp.i

CMakeFiles/CodeHunt.dir/levels/levels.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeHunt.dir/levels/levels.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/najib/Documents/CPP11/CodeHunt/levels/levels.cpp -o CMakeFiles/CodeHunt.dir/levels/levels.cpp.s

CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.requires:

.PHONY : CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.requires

CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.provides: CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.requires
	$(MAKE) -f CMakeFiles/CodeHunt.dir/build.make CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.provides.build
.PHONY : CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.provides

CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.provides.build: CMakeFiles/CodeHunt.dir/levels/levels.cpp.o


CMakeFiles/CodeHunt.dir/codehunt.cpp.o: CMakeFiles/CodeHunt.dir/flags.make
CMakeFiles/CodeHunt.dir/codehunt.cpp.o: ../codehunt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/najib/Documents/CPP11/CodeHunt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CodeHunt.dir/codehunt.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeHunt.dir/codehunt.cpp.o -c /home/najib/Documents/CPP11/CodeHunt/codehunt.cpp

CMakeFiles/CodeHunt.dir/codehunt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeHunt.dir/codehunt.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/najib/Documents/CPP11/CodeHunt/codehunt.cpp > CMakeFiles/CodeHunt.dir/codehunt.cpp.i

CMakeFiles/CodeHunt.dir/codehunt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeHunt.dir/codehunt.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/najib/Documents/CPP11/CodeHunt/codehunt.cpp -o CMakeFiles/CodeHunt.dir/codehunt.cpp.s

CMakeFiles/CodeHunt.dir/codehunt.cpp.o.requires:

.PHONY : CMakeFiles/CodeHunt.dir/codehunt.cpp.o.requires

CMakeFiles/CodeHunt.dir/codehunt.cpp.o.provides: CMakeFiles/CodeHunt.dir/codehunt.cpp.o.requires
	$(MAKE) -f CMakeFiles/CodeHunt.dir/build.make CMakeFiles/CodeHunt.dir/codehunt.cpp.o.provides.build
.PHONY : CMakeFiles/CodeHunt.dir/codehunt.cpp.o.provides

CMakeFiles/CodeHunt.dir/codehunt.cpp.o.provides.build: CMakeFiles/CodeHunt.dir/codehunt.cpp.o


# Object files for target CodeHunt
CodeHunt_OBJECTS = \
"CMakeFiles/CodeHunt.dir/levels/levels.cpp.o" \
"CMakeFiles/CodeHunt.dir/codehunt.cpp.o"

# External object files for target CodeHunt
CodeHunt_EXTERNAL_OBJECTS =

CodeHunt: CMakeFiles/CodeHunt.dir/levels/levels.cpp.o
CodeHunt: CMakeFiles/CodeHunt.dir/codehunt.cpp.o
CodeHunt: CMakeFiles/CodeHunt.dir/build.make
CodeHunt: CMakeFiles/CodeHunt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/najib/Documents/CPP11/CodeHunt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CodeHunt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodeHunt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CodeHunt.dir/build: CodeHunt

.PHONY : CMakeFiles/CodeHunt.dir/build

CMakeFiles/CodeHunt.dir/requires: CMakeFiles/CodeHunt.dir/levels/levels.cpp.o.requires
CMakeFiles/CodeHunt.dir/requires: CMakeFiles/CodeHunt.dir/codehunt.cpp.o.requires

.PHONY : CMakeFiles/CodeHunt.dir/requires

CMakeFiles/CodeHunt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CodeHunt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CodeHunt.dir/clean

CMakeFiles/CodeHunt.dir/depend:
	cd /home/najib/Documents/CPP11/CodeHunt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/najib/Documents/CPP11/CodeHunt /home/najib/Documents/CPP11/CodeHunt /home/najib/Documents/CPP11/CodeHunt/cmake-build-debug /home/najib/Documents/CPP11/CodeHunt/cmake-build-debug /home/najib/Documents/CPP11/CodeHunt/cmake-build-debug/CMakeFiles/CodeHunt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CodeHunt.dir/depend
