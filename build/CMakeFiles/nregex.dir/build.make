# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
SHELL = /data/data/com.termux/files/usr/bin/sh

# The CMake executable.
CMAKE_COMMAND = /data/data/com.termux/files/usr/bin/cmake

# The command to remove a file.
RM = /data/data/com.termux/files/usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data/data/com.termux/files/home/Nregex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/data/com.termux/files/home/Nregex/build

# Include any dependencies generated for this target.
include CMakeFiles/nregex.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nregex.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nregex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nregex.dir/flags.make

CMakeFiles/nregex.dir/src/AST.cpp.o: CMakeFiles/nregex.dir/flags.make
CMakeFiles/nregex.dir/src/AST.cpp.o: /data/data/com.termux/files/home/Nregex/src/AST.cpp
CMakeFiles/nregex.dir/src/AST.cpp.o: CMakeFiles/nregex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/data/com.termux/files/home/Nregex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nregex.dir/src/AST.cpp.o"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nregex.dir/src/AST.cpp.o -MF CMakeFiles/nregex.dir/src/AST.cpp.o.d -o CMakeFiles/nregex.dir/src/AST.cpp.o -c /data/data/com.termux/files/home/Nregex/src/AST.cpp

CMakeFiles/nregex.dir/src/AST.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nregex.dir/src/AST.cpp.i"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/data/com.termux/files/home/Nregex/src/AST.cpp > CMakeFiles/nregex.dir/src/AST.cpp.i

CMakeFiles/nregex.dir/src/AST.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nregex.dir/src/AST.cpp.s"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/data/com.termux/files/home/Nregex/src/AST.cpp -o CMakeFiles/nregex.dir/src/AST.cpp.s

CMakeFiles/nregex.dir/src/match.cpp.o: CMakeFiles/nregex.dir/flags.make
CMakeFiles/nregex.dir/src/match.cpp.o: /data/data/com.termux/files/home/Nregex/src/match.cpp
CMakeFiles/nregex.dir/src/match.cpp.o: CMakeFiles/nregex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/data/com.termux/files/home/Nregex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nregex.dir/src/match.cpp.o"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nregex.dir/src/match.cpp.o -MF CMakeFiles/nregex.dir/src/match.cpp.o.d -o CMakeFiles/nregex.dir/src/match.cpp.o -c /data/data/com.termux/files/home/Nregex/src/match.cpp

CMakeFiles/nregex.dir/src/match.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nregex.dir/src/match.cpp.i"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/data/com.termux/files/home/Nregex/src/match.cpp > CMakeFiles/nregex.dir/src/match.cpp.i

CMakeFiles/nregex.dir/src/match.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nregex.dir/src/match.cpp.s"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/data/com.termux/files/home/Nregex/src/match.cpp -o CMakeFiles/nregex.dir/src/match.cpp.s

CMakeFiles/nregex.dir/src/parser.cpp.o: CMakeFiles/nregex.dir/flags.make
CMakeFiles/nregex.dir/src/parser.cpp.o: /data/data/com.termux/files/home/Nregex/src/parser.cpp
CMakeFiles/nregex.dir/src/parser.cpp.o: CMakeFiles/nregex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/data/com.termux/files/home/Nregex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/nregex.dir/src/parser.cpp.o"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nregex.dir/src/parser.cpp.o -MF CMakeFiles/nregex.dir/src/parser.cpp.o.d -o CMakeFiles/nregex.dir/src/parser.cpp.o -c /data/data/com.termux/files/home/Nregex/src/parser.cpp

CMakeFiles/nregex.dir/src/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nregex.dir/src/parser.cpp.i"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/data/com.termux/files/home/Nregex/src/parser.cpp > CMakeFiles/nregex.dir/src/parser.cpp.i

CMakeFiles/nregex.dir/src/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nregex.dir/src/parser.cpp.s"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/data/com.termux/files/home/Nregex/src/parser.cpp -o CMakeFiles/nregex.dir/src/parser.cpp.s

CMakeFiles/nregex.dir/src/regex.cpp.o: CMakeFiles/nregex.dir/flags.make
CMakeFiles/nregex.dir/src/regex.cpp.o: /data/data/com.termux/files/home/Nregex/src/regex.cpp
CMakeFiles/nregex.dir/src/regex.cpp.o: CMakeFiles/nregex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/data/com.termux/files/home/Nregex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/nregex.dir/src/regex.cpp.o"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nregex.dir/src/regex.cpp.o -MF CMakeFiles/nregex.dir/src/regex.cpp.o.d -o CMakeFiles/nregex.dir/src/regex.cpp.o -c /data/data/com.termux/files/home/Nregex/src/regex.cpp

CMakeFiles/nregex.dir/src/regex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nregex.dir/src/regex.cpp.i"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/data/com.termux/files/home/Nregex/src/regex.cpp > CMakeFiles/nregex.dir/src/regex.cpp.i

CMakeFiles/nregex.dir/src/regex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nregex.dir/src/regex.cpp.s"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/data/com.termux/files/home/Nregex/src/regex.cpp -o CMakeFiles/nregex.dir/src/regex.cpp.s

CMakeFiles/nregex.dir/tests/nka.cpp.o: CMakeFiles/nregex.dir/flags.make
CMakeFiles/nregex.dir/tests/nka.cpp.o: /data/data/com.termux/files/home/Nregex/tests/nka.cpp
CMakeFiles/nregex.dir/tests/nka.cpp.o: CMakeFiles/nregex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/data/com.termux/files/home/Nregex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/nregex.dir/tests/nka.cpp.o"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nregex.dir/tests/nka.cpp.o -MF CMakeFiles/nregex.dir/tests/nka.cpp.o.d -o CMakeFiles/nregex.dir/tests/nka.cpp.o -c /data/data/com.termux/files/home/Nregex/tests/nka.cpp

CMakeFiles/nregex.dir/tests/nka.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nregex.dir/tests/nka.cpp.i"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/data/com.termux/files/home/Nregex/tests/nka.cpp > CMakeFiles/nregex.dir/tests/nka.cpp.i

CMakeFiles/nregex.dir/tests/nka.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nregex.dir/tests/nka.cpp.s"
	/data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/data/com.termux/files/home/Nregex/tests/nka.cpp -o CMakeFiles/nregex.dir/tests/nka.cpp.s

# Object files for target nregex
nregex_OBJECTS = \
"CMakeFiles/nregex.dir/src/AST.cpp.o" \
"CMakeFiles/nregex.dir/src/match.cpp.o" \
"CMakeFiles/nregex.dir/src/parser.cpp.o" \
"CMakeFiles/nregex.dir/src/regex.cpp.o" \
"CMakeFiles/nregex.dir/tests/nka.cpp.o"

# External object files for target nregex
nregex_EXTERNAL_OBJECTS =

nregex: CMakeFiles/nregex.dir/src/AST.cpp.o
nregex: CMakeFiles/nregex.dir/src/match.cpp.o
nregex: CMakeFiles/nregex.dir/src/parser.cpp.o
nregex: CMakeFiles/nregex.dir/src/regex.cpp.o
nregex: CMakeFiles/nregex.dir/tests/nka.cpp.o
nregex: CMakeFiles/nregex.dir/build.make
nregex: CMakeFiles/nregex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/data/data/com.termux/files/home/Nregex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable nregex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nregex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nregex.dir/build: nregex
.PHONY : CMakeFiles/nregex.dir/build

CMakeFiles/nregex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nregex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nregex.dir/clean

CMakeFiles/nregex.dir/depend:
	cd /data/data/com.termux/files/home/Nregex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/data/com.termux/files/home/Nregex /data/data/com.termux/files/home/Nregex /data/data/com.termux/files/home/Nregex/build /data/data/com.termux/files/home/Nregex/build /data/data/com.termux/files/home/Nregex/build/CMakeFiles/nregex.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/nregex.dir/depend

