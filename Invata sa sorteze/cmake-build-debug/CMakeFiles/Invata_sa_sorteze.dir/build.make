# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = "/mnt/d/work/c++/duti/Invata sa sorteze"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/work/c++/duti/Invata sa sorteze/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Invata_sa_sorteze.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Invata_sa_sorteze.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Invata_sa_sorteze.dir/flags.make

CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o: CMakeFiles/Invata_sa_sorteze.dir/flags.make
CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/work/c++/duti/Invata sa sorteze/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o -c "/mnt/d/work/c++/duti/Invata sa sorteze/main.cpp"

CMakeFiles/Invata_sa_sorteze.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Invata_sa_sorteze.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/work/c++/duti/Invata sa sorteze/main.cpp" > CMakeFiles/Invata_sa_sorteze.dir/main.cpp.i

CMakeFiles/Invata_sa_sorteze.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Invata_sa_sorteze.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/work/c++/duti/Invata sa sorteze/main.cpp" -o CMakeFiles/Invata_sa_sorteze.dir/main.cpp.s

CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.requires

CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.provides: CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Invata_sa_sorteze.dir/build.make CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.provides

CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.provides.build: CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o


# Object files for target Invata_sa_sorteze
Invata_sa_sorteze_OBJECTS = \
"CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o"

# External object files for target Invata_sa_sorteze
Invata_sa_sorteze_EXTERNAL_OBJECTS =

Invata_sa_sorteze: CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o
Invata_sa_sorteze: CMakeFiles/Invata_sa_sorteze.dir/build.make
Invata_sa_sorteze: CMakeFiles/Invata_sa_sorteze.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/work/c++/duti/Invata sa sorteze/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Invata_sa_sorteze"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Invata_sa_sorteze.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Invata_sa_sorteze.dir/build: Invata_sa_sorteze

.PHONY : CMakeFiles/Invata_sa_sorteze.dir/build

CMakeFiles/Invata_sa_sorteze.dir/requires: CMakeFiles/Invata_sa_sorteze.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Invata_sa_sorteze.dir/requires

CMakeFiles/Invata_sa_sorteze.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Invata_sa_sorteze.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Invata_sa_sorteze.dir/clean

CMakeFiles/Invata_sa_sorteze.dir/depend:
	cd "/mnt/d/work/c++/duti/Invata sa sorteze/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/work/c++/duti/Invata sa sorteze" "/mnt/d/work/c++/duti/Invata sa sorteze" "/mnt/d/work/c++/duti/Invata sa sorteze/cmake-build-debug" "/mnt/d/work/c++/duti/Invata sa sorteze/cmake-build-debug" "/mnt/d/work/c++/duti/Invata sa sorteze/cmake-build-debug/CMakeFiles/Invata_sa_sorteze.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Invata_sa_sorteze.dir/depend

