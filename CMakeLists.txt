# Minimum CMake version required 
cmake_minimum_required(VERSION 3.18)

# Project Name 
project(student_management_system)

# Set C++ standard 
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add execuatable target 
add_executable(student_test
    src/management_system.cpp
    src/student.cpp
    src/sms.cpp
)

# Include directories 
target_include_directories(student_test PRIVATE include)