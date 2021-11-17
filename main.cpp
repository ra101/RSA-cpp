#include "rsa.hpp"

#include <iostream>

int main()

{
    ra::rsa_key_pair k1, k2("127.0.0.1"); //k1 key will be diff. at any time
    std::cout << "\nk1 -\nPublic Key: " << k1.get_public_key() << "\nPrivate Key: " << k1.get_private_key();
    std::cout << "\nk2 -\nPublic Key: " << k2.get_public_key() << "\nPrivate Key: " << k2.get_private_key();

    std::size_t enc = ra::encript(3060, k2.get_public_key());
    ;
    std::string padenc = ra::encript_with_padding(3060, k2.get_public_key());
    std::cout << "\n\nEncription of int '3060'-\nWithout Padding: " << enc;
    std::cout << "\nWith Padding: " << padenc;
    std::cout << "\n\nDecription of above -\nWithout Padding: " << k2.decript(enc);
    std::cout << "\nWith Padding: " << k2.decript_with_padding(padenc);

    std::size_t digest = k2.sign<std::string>("cuz is short for because");
    std::cout << "\n\nMessage = 'cuz is short for because' -\nDigest after Signning with k2: " << digest;
    std::cout << "\nVerification with public key of k1: " << ra::verify<std::string>("cuz is short for because", digest, k1.get_public_key());
    std::cout << "\nVerification with public key of k2: " << ra::verify<std::string>("cuz is short for because", digest, k2.get_public_key());
}
