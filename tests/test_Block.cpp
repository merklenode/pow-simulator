#include "../src/Block.h"
#include <cassert>
#include <iostream>

void testBlockHashing() {
    Block block(1, "Test Data", "0");
    std::string initialHash = block.calculateHash();

    block.nonce++;
    std::string newHash = block.calculateHash();

    assert(initialHash != newHash && "Hash should change with nonce!");
    std::cout << "testBlockHashing passed.\n";
}

int main() {
    testBlockHashing();
    return 0;
}
