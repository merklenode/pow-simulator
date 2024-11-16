#ifndef SHA256_H
#define SHA256_H

#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/sha.h> // Optional if OpenSSL is used

std::string sha256(const std::string& input);

#endif
