Proof of Work (PoW) Simulator

Overview
This project implements a simple Proof of Work (PoW) mining simulator in C++. It includes functionality to simulate the process of mining a block with a customizable mining difficulty. The project also demonstrates key concepts of blockchain, including hashing, mining, and difficulty adjustment. 
The main objective of this project is to help understand how consensus mechanisms like PoW work in blockchains by implementing a basic mining function and testing its behavior under various difficulty levels.

Features
Mining Simulation: A mining function that computes hashes with a specified number of leading zeros, simulating a PoW process.
Dynamic Difficulty Adjustment: The mining difficulty adjusts based on the time it takes to mine a block.
SHA256 Hashing: Utilizes SHA256 hashing to simulate mining in a blockchain environment.
Unit Tests: Includes tests for the hashing function and the mining process using Google Test.

Requirements
Dependencies
C++ Compiler: A modern C++ compiler that supports C++14 or higher.
CMake: Used for building and managing the project.
Google Test: Used for unit testing.
OpenSSL: Required for generating SHA256 hashes.

Libraries
OpenSSL: For SHA256 hashing.
Google Test: For unit testing.
You can install these dependencies via your package manager. For example:

Ubuntu/Debian:
sudo apt-get install libgtest-dev libssl-dev cmake

macOS (Homebrew):
brew install googletest openssl


Project Structure
/pow_simulator
    ├── /src
    │   ├── main.cpp             # Main entry point for PoW simulation
    │   ├── mining.cpp           # Mining logic (finds valid hashes)
    │   ├── mining.h             # Header for mining functionality
    │   ├── hash_util.cpp        # SHA256 hash utility
    │   ├── hash_util.h          # Header for hash utility
    │   ├── difficulty_adjustment.cpp  # Difficulty adjustment logic
    │   └── difficulty_adjustment.h    # Header for difficulty adjustment
    ├── /tests
    │   ├── hashing_test.cpp     # Unit test for hashing function
    │   └── mining_test.cpp      # Unit test for mining logic
    ├── CMakeLists.txt           # CMake configuration file
    ├── README.md                # This readme file



src/ Directory
Contains the main logic of the PoW simulation, including mining, hashing, and difficulty adjustment.
main.cpp: The main program that simulates mining a block.
mining.cpp: Contains the logic for finding a valid hash through the mining process.
hash_util.cpp: Defines the SHA256 hashing function.
difficulty_adjustment.cpp: Contains logic to adjust mining difficulty based on block mining time.
tests/ Directory
Contains unit tests written using Google Test.
hashing_test.cpp: Tests the correctness of the sha256 function.
mining_test.cpp: Tests the mining process to ensure it finds valid hashes under different difficulty levels.

How to Build and Run

Step 1: Clone the repository
Clone the repository to your local machine:
git clone https://github.com/merklenode/pow-simulator.git
cd pow-simulator


Step 2: Build the Project

Create a build directory:
mkdir build
cd build

Run CMake to configure the project:
cmake ..

Build the project:
make

Step 3: Run the PoW Simulator

After building the project, run the PoW Simulator executable:
./PoWSimulator

This will simulate the mining process and print out the mining results, including the valid hash and nonce.

Step 4: Run Unit Tests
To run the unit tests for hashing and mining, use the following command:
./hashing_test       # Run hashing tests
./mining_test        # Run mining tests
These tests will verify that the hashing function and the mining logic work as expected.

How It Works
Mining Process
The mineBlock function simulates the mining process where the goal is to find a hash with a specific number of leading zeros. It combines the input string (block data) with a nonce value and hashes the result using SHA256 until a valid hash is found.

The mining difficulty can be adjusted dynamically based on how long it takes to mine a block. If the block is mined too quickly, the difficulty is increased; if it takes too long, the difficulty is decreased.
Difficulty Adjustment

The adjustDifficulty function dynamically adjusts the mining difficulty based on the time it takes to mine a block. The target is to have each block mined within a certain time frame (e.g., 5 seconds). If the mining process is too fast or too slow, the difficulty will be adjusted up or down accordingly.

Testing
Hashing Tests
The hashing tests verify the correctness of the SHA256 hash function. The unit tests include checks for basic strings, empty strings, and other sample inputs.

Mining Tests
The mining tests verify the mining process by checking whether a valid hash with the required leading zeros is found for various difficulty levels.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Author
Your Name  
  Email:   sajjilakhtar0786@gmail.com
  GitHub: https://github.com/merklenode

Feel free to adapt this template according to your specific project needs. This README.md file provides an overview of the project, how to set it up, and how to run the code and tests. It should help users get up and running with the PoW Simulator and understand its key concepts.
