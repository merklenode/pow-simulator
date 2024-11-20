#include <gtest/gtest.h>
#include "../src/mining.h"
#include "../src/hash_util.h"

bool hasLeadingZeros(const std::string& hash, int difficulty) {
    return hash.substr(0, difficulty) == std::string(difficulty, '0');
}

TEST(MiningTest, ValidHashFound) {
    std::string input = "Test Block";
    int difficulty = 4;

    // Capture the output of mineBlock to test if it completes successfully
    testing::internal::CaptureStdout();
    bool result = mineBlock(input, difficulty);
    std::string output = testing::internal::GetCapturedStdout();

    // Ensure that a valid hash is found (i.e., it starts with the correct number of zeros)
    EXPECT_TRUE(result);  // Should return true when mining is successful

    // Extract the mined hash and check if it meets the difficulty criteria
    size_t nonce_pos = output.find("Nonce:");
    size_t hash_pos = output.find("Hash:");
    if (nonce_pos != std::string::npos && hash_pos != std::string::npos) {
        std::string hash = output.substr(hash_pos + 5);  // Get the hash substring
        hash = hash.substr(0, hash.find("\n"));  // Clean up the hash (remove newline)
        
        // Check if the hash has the required number of leading zeros
        EXPECT_TRUE(hasLeadingZeros(hash, difficulty));
    }
}
