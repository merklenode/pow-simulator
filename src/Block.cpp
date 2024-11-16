#include "Block.h"
#include <sstream>
#include <iomanip>
#include <openssl/sha.h>

// Constructor
Block::Block(int idx, const std::string& blockData, const std::string& prevHash)
    : index(idx), data(blockData), nonce(0), previousHash(prevHash) {
    hash = calculateHash();
}

// Hashing function
std::string Block::sha256(const std::string& input) const {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hash);
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
    }
    return ss.str();
}

// Calculate hash based on block attributes
std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << data << nonce << previousHash;
    return sha256(ss.str());
}
