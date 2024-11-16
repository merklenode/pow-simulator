#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block {
public:
    int index;
    std::string data;
    int nonce;
    std::string hash;
    std::string previousHash;

    Block(int idx, const std::string& blockData, const std::string& prevHash);

    std::string calculateHash() const;

private:
    std::string sha256(const std::string& input) const;
};

#endif
