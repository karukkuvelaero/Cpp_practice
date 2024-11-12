/*
author=@karukkuvelaero
file_name = Substitution_Cipher
function = to encrypt a message using given key
*/

#include <iostream>
#include <string>

int main()
{
    std::string alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string key = "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsprqonmlkjihgfedcba";

    std::string message;
    std::cout<<"Enter the message"<<std::endl;
    getline(std::cin,message);
    std::string encrypted;

    std::cout<<message;

    
    for (int i=0; i<message.size(); i++)
    {
        char temp = message[i];
        int key_pos = alphabets.find(temp);
        
        if (key_pos != std::string::npos)
        {
            encrypted.push_back(key[key_pos]);
        }
        else
        {
            encrypted.push_back(temp);
        }
        
    }

    std::cout<<"Encrypted message is "<<encrypted<<std::endl;

std::string decrypted;

for (int i=0; i<encrypted.size(); i++)
    {
        char temp = encrypted[i];
        int key_pos = key.find(temp);
        if (key_pos != std::string::npos)
        {
            decrypted.push_back(alphabets[key_pos]);
        }
        else
        {
            decrypted.push_back(temp);
        }
        
    
    }
    std::cout<<"Decrypted message is "<<decrypted<<std::endl;
    return 0;
}