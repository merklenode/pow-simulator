#include "Blockchain.h"
#include <ctime>
#include <iostream>

// Constructor
Blockchain::Blockchain(int diff) : difficulty(diff) {
    chain.emplace_back(0, "Genesis Block", "0");
    chain[0].hash = chain[0].calculateHash();
}

// Add a new block to the blockchain
void Blockchain::addBlock(const std::string& data) {
    Block newBlock(chain.size(), data, chain.back().hash);

    std::cout << "Mining block " << newBlock.index << "...\n";
    clock_t start = clock();
    while (!isHashValid(newBlock.hash)) {
        newBlock.nonce++;
        newBlock.hash = newBlock.calculateHash();
    }
    clock_t end = clock();

    chain.push_back(newBlock);
    std::cout << "Block mined in " << double(end - start) / CLOCKS_PER_SEC << " seconds.\n";
    std::cout << "Hash: " << newBlock.hash << "\n";
}

// Display the entire blockchain
void Blockchain::displayChain() const {
    for (const auto& block : chain) {
        std::cout << "Block " << block.index << ":\n";
        std::cout << "Data: " << block.data << "\n";
        std::cout << "Nonce: " << block.nonce << "\n";
        std::cout << "Hash: " << block.hash << "\n";
        std::cout << "Previous Hash: " << block.previousHash << "\n\n";
    }
}

// Check if the hash meets the difficulty criteria
bool Blockchain::isHashValid(const std::string& hash) const {
    return hash.substr(0, difficulty) == std::string(difficulty, '0');
}

// Implement the getChain method
const std::vector<Block>& Blockchain::getChain() const {
    return chain;
}
