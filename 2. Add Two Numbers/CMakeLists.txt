cmake_minimum_required(VERSION 3.10)

# Set the project name and language
project(AddTwoNumbersLinkedList LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add your source file
add_executable(AddTwoNumbers add_two_numbers.cpp)
