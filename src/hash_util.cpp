#include "hash_util.h"
#include <openssl/sha.h>
#include <iomanip>
#include <sstream>

std::string sha256(const std::string& str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];

    // Perform SHA256 hashing on the input string
    SHA256_CTX sha256_ctx;
    SHA256_Init(&sha256_ctx);
    SHA256_Update(&sha256_ctx, str.c_str(), str.size());
    SHA256_Final(hash, &sha256_ctx);

    // Convert the hash to a hex string
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::setw(2) << std::setfill('0') << std::hex << (int)hash[i];
    }

    return ss.str();
}
