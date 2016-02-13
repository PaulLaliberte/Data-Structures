```cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <openssl/evp.h>
#include <openssl/aes.h>

// g++ cipher.cc -lcrypto -o demo

using namespace std;

class Cipher {
public:
    virtual string encrypt(string text);
    virtual string decrypt(string text);
};

string Cipher::encrypt(string text) {
    return text;
}

string Cipher::decrypt(string text) {
    return text;
}

class Rot13 : public Cipher {
public:
    Rot13();
    string encrypt(string text);
    string decrypt(string text);
private:
    string plain;
    string rotated;
};

Rot13::Rot13() {
    this->plain = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    this->rotated = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
}

string Rot13::encrypt(string text) {
    string output = "";
    for (letter : text) {
        int index = this->plain.find(letter);
        if (index == -1) {
            output.push_back(letter);
        } else {
            output.push_back(this->rotated[index]);
        }
    }
    return output;
}

string Rot13::decrypt(string text) {
    string output = "";
    for (letter : text) {
        int index = this->rotated.find(letter);
        if (index == -1) {
            output.push_back(letter);
        } else {
            output.push_back(this->plain[index]);
        }
    }
    return output;
}

class AES : public Cipher {
public:
    AES(string secret);
    string decrypt(string text);
    string encrypt(string text);
    
private:
    unsigned char key[32];
    unsigned char iv[16];
};

AES::AES(string secret) {
    const int rounds = 8;
    unsigned char salt[8] = {0};
    EVP_BytesToKey(EVP_aes_256_cbc(), EVP_sha1(), salt,
                   (unsigned char *) secret.data(), secret.length(), rounds, key, iv);
}

string AES::encrypt(string text) {
    unsigned char buffer[text.length() + AES_BLOCK_SIZE];
    
    EVP_CIPHER_CTX ctx;
    int length1;
    int length2;
    
    EVP_EncryptInit(&ctx, EVP_aes_256_cbc(), key, iv);
    EVP_EncryptUpdate(&ctx, buffer, &length1, (unsigned char *) text.data(), text.length());
    EVP_EncryptFinal(&ctx, buffer + length1, &length2);
    
    return string((const char *) buffer, length1 + length2);
}

string AES::decrypt(string text) {
    unsigned char buffer[text.length() + AES_BLOCK_SIZE];
    
    EVP_CIPHER_CTX ctx;
    int length1;
    int length2;
    
    EVP_DecryptInit(&ctx, EVP_aes_256_cbc(), key, iv);
    EVP_DecryptUpdate(&ctx, buffer, &length1, (unsigned char *) text.data(), text.length());
    EVP_DecryptFinal(&ctx, buffer + length1, &length2);
    
    return string((const char *) buffer, length1 + length2);
}

string decrypt_with(Cipher *cipher, string text) {
    return cipher->decrypt(text);
}

string encrypt_with(Cipher *cipher, string text) {
    return cipher->encrypt(text);
}

int main() {
    // Use ineffective Caesar cipher.
    Cipher *cipher = new Rot13();
    string message = "The quick brown fox jumped over the lazy dog";
    
    string encrypted = encrypt_with(cipher, message);
    string decrypted = decrypt_with(cipher, encrypted);
    
    cout << "encrypted: " << encrypted << endl;
    cout << "decrypted: " << decrypted << endl;
    
    delete cipher;
    
    // Use real AES encryption.
    cipher = new AES("secr3t key");
    encrypted = encrypt_with(cipher, message);
    decrypted = decrypt_with(cipher, encrypted);
    
    cout << "encrypted: ";
    
    // Encode encrypted bytes as hex so they're printable.
    for (unsigned char c : encrypted) {
        cout << setfill('0') << setw(2) << hex << (int) c << " ";
    }
    cout << endl;
    cout << "decrypted: " << decrypted << endl;
    
    delete cipher;
    
    return 0;
}
```
