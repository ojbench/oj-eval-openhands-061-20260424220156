
cmake_minimum_required(VERSION 3.10)
project(problem_061)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(code main.cpp)

# Set output directory
set_target_properties(code PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)
