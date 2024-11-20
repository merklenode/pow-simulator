#include "mining.h"
#include "hash_util.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>

// Helper function to check if the hash has the required number of leading zeros
bool hasLeadingZeros(const std::string& hash, int difficulty) {
    return hash.substr(0, difficulty) == std::string(difficulty, '0');
}

bool mineBlock(const std::string& input, int difficulty) {
    std::string hash;
    int nonce = 0;
    auto start = std::chrono::high_resolution_clock::now();

    // Keep trying different nonce values until the hash meets the difficulty
    do {
        nonce++;
        std::ostringstream ss;
        ss << input << nonce;
        hash = sha256(ss.str());
    } while (!hasLeadingZeros(hash, difficulty));

    // Print the nonce and hash when mining is successful
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Nonce: " << nonce << std::endl;
    std::cout << "Hash: " << hash << std::endl;
    std::cout << "Mining took " << duration.count() << " seconds." << std::endl;

    return true;
}
