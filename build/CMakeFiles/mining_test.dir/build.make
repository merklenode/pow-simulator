# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/merklenode/Desktop/desk2.0/pow_simulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/merklenode/Desktop/desk2.0/pow_simulator/build

# Include any dependencies generated for this target.
include CMakeFiles/mining_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mining_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mining_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mining_test.dir/flags.make

CMakeFiles/mining_test.dir/tests/mining_test.cpp.o: CMakeFiles/mining_test.dir/flags.make
CMakeFiles/mining_test.dir/tests/mining_test.cpp.o: /home/merklenode/Desktop/desk2.0/pow_simulator/tests/mining_test.cpp
CMakeFiles/mining_test.dir/tests/mining_test.cpp.o: CMakeFiles/mining_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/merklenode/Desktop/desk2.0/pow_simulator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mining_test.dir/tests/mining_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mining_test.dir/tests/mining_test.cpp.o -MF CMakeFiles/mining_test.dir/tests/mining_test.cpp.o.d -o CMakeFiles/mining_test.dir/tests/mining_test.cpp.o -c /home/merklenode/Desktop/desk2.0/pow_simulator/tests/mining_test.cpp

CMakeFiles/mining_test.dir/tests/mining_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mining_test.dir/tests/mining_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/merklenode/Desktop/desk2.0/pow_simulator/tests/mining_test.cpp > CMakeFiles/mining_test.dir/tests/mining_test.cpp.i

CMakeFiles/mining_test.dir/tests/mining_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mining_test.dir/tests/mining_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/merklenode/Desktop/desk2.0/pow_simulator/tests/mining_test.cpp -o CMakeFiles/mining_test.dir/tests/mining_test.cpp.s

# Object files for target mining_test
mining_test_OBJECTS = \
"CMakeFiles/mining_test.dir/tests/mining_test.cpp.o"

# External object files for target mining_test
mining_test_EXTERNAL_OBJECTS =

mining_test: CMakeFiles/mining_test.dir/tests/mining_test.cpp.o
mining_test: CMakeFiles/mining_test.dir/build.make
mining_test: /usr/lib/x86_64-linux-gnu/libgtest.a
mining_test: CMakeFiles/mining_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/merklenode/Desktop/desk2.0/pow_simulator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mining_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mining_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mining_test.dir/build: mining_test
.PHONY : CMakeFiles/mining_test.dir/build

CMakeFiles/mining_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mining_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mining_test.dir/clean

CMakeFiles/mining_test.dir/depend:
	cd /home/merklenode/Desktop/desk2.0/pow_simulator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/merklenode/Desktop/desk2.0/pow_simulator /home/merklenode/Desktop/desk2.0/pow_simulator /home/merklenode/Desktop/desk2.0/pow_simulator/build /home/merklenode/Desktop/desk2.0/pow_simulator/build /home/merklenode/Desktop/desk2.0/pow_simulator/build/CMakeFiles/mining_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/mining_test.dir/depend

