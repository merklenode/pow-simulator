#include "Blockchain.h"
#include <iostream>

int main() {
    Blockchain blockchain(4); // Difficulty level: 4 leading zeros

    std::cout << "Mining and adding blocks to the blockchain...\n";
    blockchain.addBlock("Transaction Data 1");
    blockchain.addBlock("Transaction Data 2");
    blockchain.addBlock("Transaction Data 3");

    std::cout << "\nBlockchain:\n";
    blockchain.displayChain();

    return 0;
}
