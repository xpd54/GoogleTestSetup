# This CMakeLists stay in root folder which defines all common attribute

# Minimum version for CMake
cmake_minimum_required(VERSION 3.26)

# c++ standard
set(CMAKE_CXX_STANDARD 17)
project(Test)

# Set so binary gets created into build/ folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Add all subdirectory which have it's CMakeLists

add_subdirectory(src)
enable_testing()

# Root CMakeLists adds Test as subdirectory, 
# and Test/CMakeLists adds googletest as subdirectory and so on.
add_subdirectory(Test)