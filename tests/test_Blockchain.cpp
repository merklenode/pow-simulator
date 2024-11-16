#include "../src/Blockchain.h"
#include <cassert>
#include <iostream>

void testAddBlock() {
    Blockchain blockchain(4); // Blockchain initialized with difficulty level 4
    blockchain.addBlock("Transaction Data 1");
    blockchain.addBlock("Transaction Data 2");

    // Ensure blockchain contains the genesis block and two additional blocks
    assert(blockchain.getChain().size() == 3 && "Blockchain should have 3 blocks (including genesis).");
    std::cout << "testAddBlock passed.\n";
}

void testValidHash() {
    Blockchain blockchain(4);
    blockchain.addBlock("Test Data");

    // Verify that the last block's hash meets the difficulty criteria
    std::string lastHash = blockchain.getChain().back().hash;
    assert(lastHash.substr(0, 4) == "0000" && "Block hash should match the difficulty.");
    std::cout << "testValidHash passed.\n";
}

int main() {
    testAddBlock();
    testValidHash();
    return 0;
}
