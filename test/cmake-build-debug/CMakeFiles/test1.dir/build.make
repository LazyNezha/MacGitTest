# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/test1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test1.dir/flags.make

CMakeFiles/test1.dir/main.c.o: CMakeFiles/test1.dir/flags.make
CMakeFiles/test1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test1.dir/main.c.o   -c "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/main.c"

CMakeFiles/test1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/main.c" > CMakeFiles/test1.dir/main.c.i

CMakeFiles/test1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/main.c" -o CMakeFiles/test1.dir/main.c.s

CMakeFiles/test1.dir/game.c.o: CMakeFiles/test1.dir/flags.make
CMakeFiles/test1.dir/game.c.o: ../game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test1.dir/game.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test1.dir/game.c.o   -c "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/game.c"

CMakeFiles/test1.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test1.dir/game.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/game.c" > CMakeFiles/test1.dir/game.c.i

CMakeFiles/test1.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test1.dir/game.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/game.c" -o CMakeFiles/test1.dir/game.c.s

# Object files for target test1
test1_OBJECTS = \
"CMakeFiles/test1.dir/main.c.o" \
"CMakeFiles/test1.dir/game.c.o"

# External object files for target test1
test1_EXTERNAL_OBJECTS =

test1: CMakeFiles/test1.dir/main.c.o
test1: CMakeFiles/test1.dir/game.c.o
test1: CMakeFiles/test1.dir/build.make
test1: CMakeFiles/test1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test1.dir/build: test1

.PHONY : CMakeFiles/test1.dir/build

CMakeFiles/test1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test1.dir/clean

CMakeFiles/test1.dir/depend:
	cd "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1" "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1" "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug" "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug" "/mnt/d/I AM IRONMAN/Ironman_Projects/test/test1/cmake-build-debug/CMakeFiles/test1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/test1.dir/depend

