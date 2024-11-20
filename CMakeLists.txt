cmake_minimum_required(VERSION 3.10)

# Project name
project(PoWSimulator)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)

# Find OpenSSL (needed for SHA256 hashing)
find_package(OpenSSL REQUIRED)

# Include directories for OpenSSL and project source files
include_directories(${OPENSSL_INCLUDE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src)  # Include the src folder for header files

# Add the executable for PoW Simulator
add_executable(PoWSimulator
    src/main.cpp
    src/mining.cpp
    src/hash_util.cpp
    src/difficulty_adjustment.cpp
)

# Link OpenSSL libraries to the executable
target_link_libraries(PoWSimulator ${OPENSSL_LIBRARIES})

# Optional: Add Google Test for unit testing (if needed)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executable (if you have tests)
add_executable(mining_test tests/mining_test.cpp)

# Link Google Test libraries to the test executable
target_link_libraries(mining_test ${GTEST_LIBRARIES} pthread)
