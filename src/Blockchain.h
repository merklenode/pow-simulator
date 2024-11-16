#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "Block.h"
#include <vector>

class Blockchain {
private:
    std::vector<Block> chain;
    int difficulty;

    bool isHashValid(const std::string& hash) const;

public:
    Blockchain(int diff);

    void addBlock(const std::string& data);
    void displayChain() const;

    // Add the getter for the chain
    const std::vector<Block>& getChain() const;
};

#endif
