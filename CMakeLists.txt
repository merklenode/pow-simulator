cmake_minimum_required(VERSION 3.10)

# Project name and version
project(pow_simulator VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the main source directory
add_executable(pow-simulator 
    src/main.cpp 
    src/Blockchain.cpp 
    src/Block.cpp 
    lib/sha256.cpp)  # Directly include the sha256.cpp file

# Link the SHA-256 library (since it’s directly included, no need for target_link_libraries)
# target_link_libraries(pow-simulator sha256)  # Not needed anymore

# If you have unit tests, you can directly add them without `add_subdirectory`
# Add test files as sources
add_executable(test_Block test/test_Block.cpp)
add_executable(test_Blockchain test/test_Blockchain.cpp)

# Optionally, link your main executable with test executables (if needed)
# target_link_libraries(test_Block pow-simulator)
# target_link_libraries(test_Blockchain pow-simulator)

# Enable testing and define test targets if required
enable_testing()
