# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/damdem/Bureau/poocs/regression/build

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damdem/Bureau/poocs/regression/build

# Include any dependencies generated for this target.
include CMakeFiles/clustering.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/clustering.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clustering.dir/flags.make

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o: CMakeFiles/clustering.dir/flags.make
CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o: /home/damdem/Bureau/poocs/regression/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damdem/Bureau/poocs/regression/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o -c /home/damdem/Bureau/poocs/regression/src/main.cpp

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damdem/Bureau/poocs/regression/src/main.cpp > CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.i

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damdem/Bureau/poocs/regression/src/main.cpp -o CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.s

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.requires:

.PHONY : CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.requires

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.provides: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/clustering.dir/build.make CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.provides

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.provides.build: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o


CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o: CMakeFiles/clustering.dir/flags.make
CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o: /home/damdem/Bureau/poocs/regression/src/DataGen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damdem/Bureau/poocs/regression/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o -c /home/damdem/Bureau/poocs/regression/src/DataGen.cpp

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damdem/Bureau/poocs/regression/src/DataGen.cpp > CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.i

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damdem/Bureau/poocs/regression/src/DataGen.cpp -o CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.s

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.requires:

.PHONY : CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.requires

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.provides: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.requires
	$(MAKE) -f CMakeFiles/clustering.dir/build.make CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.provides.build
.PHONY : CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.provides

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.provides.build: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o


CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o: CMakeFiles/clustering.dir/flags.make
CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o: /home/damdem/Bureau/poocs/regression/src/Tools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damdem/Bureau/poocs/regression/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o -c /home/damdem/Bureau/poocs/regression/src/Tools.cpp

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damdem/Bureau/poocs/regression/src/Tools.cpp > CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.i

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damdem/Bureau/poocs/regression/src/Tools.cpp -o CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.s

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.requires:

.PHONY : CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.requires

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.provides: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.requires
	$(MAKE) -f CMakeFiles/clustering.dir/build.make CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.provides.build
.PHONY : CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.provides

CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.provides.build: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o


# Object files for target clustering
clustering_OBJECTS = \
"CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o" \
"CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o" \
"CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o"

# External object files for target clustering
clustering_EXTERNAL_OBJECTS =

clustering: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o
clustering: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o
clustering: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o
clustering: CMakeFiles/clustering.dir/build.make
clustering: /usr/lib/x86_64-linux-gnu/libpython2.7.so
clustering: CMakeFiles/clustering.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damdem/Bureau/poocs/regression/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable clustering"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clustering.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clustering.dir/build: clustering

.PHONY : CMakeFiles/clustering.dir/build

CMakeFiles/clustering.dir/requires: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/main.cpp.o.requires
CMakeFiles/clustering.dir/requires: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/DataGen.cpp.o.requires
CMakeFiles/clustering.dir/requires: CMakeFiles/clustering.dir/home/damdem/Bureau/poocs/regression/src/Tools.cpp.o.requires

.PHONY : CMakeFiles/clustering.dir/requires

CMakeFiles/clustering.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clustering.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clustering.dir/clean

CMakeFiles/clustering.dir/depend:
	cd /home/damdem/Bureau/poocs/regression/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damdem/Bureau/poocs/regression/build /home/damdem/Bureau/poocs/regression/build /home/damdem/Bureau/poocs/regression/build /home/damdem/Bureau/poocs/regression/build /home/damdem/Bureau/poocs/regression/build/CMakeFiles/clustering.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clustering.dir/depend

