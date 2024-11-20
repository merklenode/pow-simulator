#include <gtest/gtest.h>
#include "hash_util.h"

TEST(HashingTest, CorrectSHA256Hash) {
    // Test case 1: Basic input
    std::string input1 = "Hello, World!";
    std::string expectedHash1 = "a591a6d40bf420404a011733cfb7b190d62c65bf0bcda6a5e1b72e10bf1e1e22";  // SHA256 hash of "Hello, World!"
    EXPECT_EQ(sha256(input1), expectedHash1);

    // Test case 2: Empty string
    std::string input2 = "";
    std::string expectedHash2 = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855";  // SHA256 hash of ""
    EXPECT_EQ(sha256(input2), expectedHash2);

    // Test case 3: Another random input
    std::string input3 = "Test Blockchain";
    std::string expectedHash3 = "94d55e3eabfe1f5e430f3c9bbfd37a064d4431f96e9dbb504c4f82060f61530b";  // SHA256 hash of "Test Blockchain"
    EXPECT_EQ(sha256(input3), expectedHash3);
}
