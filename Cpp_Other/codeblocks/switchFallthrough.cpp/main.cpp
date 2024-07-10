#include <iostream>
char getChar()
{
    std::cout<< "Enter a vowel"<<'\n';
    char ch{ };
    std::cin>>ch;
    return ch;
}
//check vowel:
//bool isVowel(char  c)
//{
//    return (c == 'a',c == 'e',c == 'i',c == 'o',c == 'u',c == 'A',c == 'E',c == 'I',c == 'O',c == 'U');
//}

bool isVowel(char  c)
{
    switch(c)
    {
        case 'a':
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
   switch(2)
   {
    case 1:
        std::cout << 1 <<'\n';
        break;
    case 2:
        std::cout << 2 <<'\n';
        [[fallthrough]];// instenstional falthrough
       //break;

    case 3:
        std::cout << 3 <<'\n';
        break;

   }

//char ch{ getChar() };
//std::cout << "the vowel is = "<< ch <<'\n';



 isVowel(getChar());
//std::cout << c << " is a vowel " <<'\n';




    return 0;
}
