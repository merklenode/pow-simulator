### Simple Version of the Proof of Work (PoW) Simulator

This project is a basic Proof of Work (PoW) mining simulator written in C++. It simulates the process of mining a block with adjustable difficulty and demonstrates key concepts in blockchain, such as hashing, mining, and difficulty changes. The main goal is to help understand how PoW works in blockchains by implementing a simple mining function and testing its performance under different difficulty levels.

### Key Features:
- **Mining Simulation**: Simulates mining by finding hashes with a specified number of leading zeros.
- **Dynamic Difficulty Adjustment**: Adjusts mining difficulty based on how long it takes to mine a block.
- **SHA256 Hashing**: Uses SHA256 hashing to simulate the mining process in blockchain.
- **Unit Tests**: Includes tests for hashing and mining functions using Google Test.

### Requirements:
- A C++ compiler that supports C++14 or higher.
- CMake for building the project.
- Google Test for unit testing.
- OpenSSL for generating SHA256 hashes.

### Libraries:
- **OpenSSL**: For SHA256 hashing.
- **Google Test**: For unit testing.

You can install these dependencies using a package manager:

- **Ubuntu/Debian**: `sudo apt-get install libgtest-dev libssl-dev cmake`
- **macOS (Homebrew)**: `brew install googletest openssl`

### Project Structure:
```
/pow_simulator
├── /src
│   ├── main.cpp                # Main entry point for PoW simulation
│   ├── mining.cpp              # Logic for finding valid hashes
│   ├── mining.h                # Header for mining functionality
│   ├── hash_util.cpp           # SHA256 hash utility
│   ├── hash_util.h             # Header for hash utility
│   ├── difficulty_adjustment.cpp # Difficulty adjustment logic
│   └── difficulty_adjustment.h  # Header for difficulty adjustment
├── /tests
│   ├── hashing_test.cpp        # Unit test for hashing function
│   └── mining_test.cpp         # Unit test for mining logic
├── CMakeLists.txt              # Build configuration
├── README.md                   # Project documentation
```

### src/ Directory:
This folder contains the main logic for the PoW simulation:
- **main.cpp**: Starts the PoW mining simulation.
- **mining.cpp**: Implements the mining process that finds a valid hash.
- **hash_util.cpp**: Implements SHA256 hashing.
- **difficulty_adjustment.cpp**: Adjusts mining difficulty based on block mining time.

### tests/ Directory:
This folder includes unit tests written with Google Test:
- **hashing_test.cpp**: Tests the SHA256 hashing function.
- **mining_test.cpp**: Tests the mining function to ensure it finds valid hashes with varying difficulty.

### How to Build and Run:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/merklenode/pow-simulator.git
   cd pow-simulator
   ```

2. **Build the project**:
   - Create a build directory:
     ```bash
     mkdir build
     cd build
     ```
   - Run CMake to configure the project:
     ```bash
     cmake ..
     ```
   - Build the project:
     ```bash
     make
     ```

3. **Run the PoW Simulator**:
   After building, run the simulator:
   ```bash
   ./PoWSimulator
   ```
   This will simulate mining and print the mining results, including the valid hash and nonce.

4. **Run Unit Tests**:
   To test the hashing and mining logic:
   ```bash
   ./hashing_test  # Run hashing tests
   ./mining_test   # Run mining tests
   ```

### How It Works:

- **Mining Process**: The `mineBlock` function simulates mining by finding a hash with the required number of leading zeros. It combines input data with a nonce value and hashes the result using SHA256 until a valid hash is found.

- **Dynamic Difficulty**: The `adjustDifficulty` function adjusts the mining difficulty based on how long it takes to mine a block. The target is to mine each block within a set time (e.g., 5 seconds). If mining is too fast, the difficulty increases; if it's too slow, the difficulty decreases.

### Testing:

- **Hashing Tests**: Ensure the SHA256 function works correctly, checking various inputs.
- **Mining Tests**: Verifies that the mining function can find valid hashes for different difficulty levels.

### License:
This project is licensed under the MIT License. See the LICENSE file for details.

### Author:
- **Your Name**  
- Email: sajjilakhtar0786@gmail.com  
- GitHub: [https://github.com/merklenode](https://github.com/merklenode)

This README helps you get started with the PoW Simulator, explaining how to set it up, run it, and test the key features.
