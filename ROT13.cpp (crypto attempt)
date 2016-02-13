```cpp
//
//  main.cpp
//  AYY
//
//  Created by Paul Laliberte on 5/5/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//
//
//  main.cpp
//  Crypto Extra Credit
//
//  Created by Paul Laliberte on 5/5/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class Cipher
{
public:
    virtual string encrypt(string phrase);
    virtual string decrypt(string phrase);
};


string Cipher::encrypt(string phrase)
{
    return phrase;
}

string Cipher::decrypt(string phrase)
{
    return phrase;
}



class ROT13 : public Cipher
{
public:
    string encrypt(string phrase);
    string decrypt(string phrase);
    char this_looks_alot_like_hammingdistance_kind_of1(char character);
};



string encrypt_with(Cipher *cipher, string phrase)
{
    return cipher->encrypt(phrase);
}

string decrypt_with(Cipher *cipher, string phrase)
{
    return cipher->decrypt(phrase);
}

char ROT13::this_looks_alot_like_hammingdistance_kind_of1(char character)
{
    string regular_string_input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string rot13_encryptionstyle = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    if (character == ' ')
        return character;
    else
    {
        for (int i = 0; i < 52; i++)
        {
            if(regular_string_input[i] == character)
                return rot13_encryptionstyle[i];
        }
    }
    return false;
}


int main()
{
    ROT13 *encryption;
    encryption = new ROT13;
    string intitial_string = "The quick brown fox jumped over the lazy dog";
    string string1 = encrypt_with(encryption, intitial_string);
    cout << string1 << endl;
//    string string2 = decrypt_with(encryption, string1);
//    cout << string2 << endl;
    return 0;
}


string ROT13::encrypt(string phrase)
{
    char character = '\0';
    string *new_phrase;
    long phrase_length = phrase.length();
    string regular_string_input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string rot13_encryptionstyle = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    
    for (int i = 0; i < phrase_length; i++)
    {
        for (int i = 0; i < 52; i++)
        {
            if(regular_string_input[i] == character)
                new_phrase = &rot13_encryptionstyle[i];
        }
    }
    return *new_phrase;
}

string ROT13::decrypt(string phrase)
{
    string new_phrase;
    new_phrase = phrase;
    long phrase_length;
    phrase_length = phrase.length();
    for (int i = 0; i < phrase_length; i++)
    {
        new_phrase = new_phrase + this_looks_alot_like_hammingdistance_kind_of1(new_phrase[i]);
    }
    return new_phrase;
}
```
