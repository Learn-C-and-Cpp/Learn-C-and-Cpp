#include <iostream>
#include <string>

int main()
{
    std::string alphabet{"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'#"};
    std::string key{" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr#'"};

    std::string secret_message{};
    std::string encrypted_message{};

    std::cout << "Enter your secret message: " << std::endl;
    getline(std::cin, secret_message);

    std::cout << "Encrypting message... " << std::endl;
    // for (char i{0}; i < secret_message.length(); ++i)
    for (char c : secret_message) // loop throgh the secret message (c = current char)
    {
        size_t position = alphabet.find(c); // find c in alphate and return it's position - c in alphabet

        if (position != std::string::npos) // char found
        {
            char new_char{key.at(position)}; //  get char from key - to at position of c ; substitute with a char at the same position in key
            encrypted_message += new_char;
        }
        else
        {
            encrypted_message += c;
        }
    }
    std::cout << "Encryped message: " << encrypted_message << std::endl;

   //-----------------------------------------------
    std::string decrypted_message{};  
    std::cout << "Decrypting message..." << std::endl;
    for(char c:encrypted_message)
    {
        size_t position = key.find(c);
        if(position != std::string::npos)
        {
            char new_char = {alphabet.at(position)};
            decrypted_message += new_char;
        } 
        else
        {
            decrypted_message += c;
        }

    }

    std::cout << "Decryped message: " << decrypted_message << std::endl;

    return 0;
}
//https://www.educba.com/types-of-cipher/