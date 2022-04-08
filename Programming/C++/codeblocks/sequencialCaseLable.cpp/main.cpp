// check if a char if a vowel

#include <iostream>
bool isVowel(char c)
{
    switch(c)
    {
        case 'a': // if c is 'a'
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
        return false;

    }

}

int main()
{
    std::cout << "Enter an alphapet\n";
    char ch{ };
    std::cin>>ch;

    if(isVowel(ch))
    {
        std::cout << " is vowel\n";
    }
    else
    {
        std::cout << " is a consonant\n";

    }



    return 0;
}
