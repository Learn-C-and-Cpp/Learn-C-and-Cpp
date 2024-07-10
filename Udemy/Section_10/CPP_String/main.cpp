// section 10

#include <iostream>
#include <string>

int main()
{
    std::string s0;
    std::string s1{"Apple"};
    std::string s2{"Banana"};
    std::string s3{"Kiwi"};
    std::string s4{"apple"};
    std::string s5{s1};       // Apple
    std::string s6{s1, 0, 3}; // App 
    std::string s7(10, 'X');  // XXXXXXXXXX

     
    // std::cout << s0 << std::endl;          // No garbage
    // std::cout << s0.length() << std::endl; // empty string

    // // Initialization
    // std::cout <<"Initialasation---------------------" << std::endl;
    // std::cout <<"s1 is initialised to: "<< s1 << std::endl;
    // std::cout <<"s2 is initialised to: "<< s2 << std::endl;
    // std::cout <<"s3 is initialised to: "<< s3 << std::endl;
    // std::cout <<"s4 is initialised to: "<< s4 << std::endl;
    // std::cout <<"s5 is initialised to: "<< s5 << std::endl;
    // std::cout <<"s6 is initialised to: "<< s6 << std::endl;
    // std::cout <<"s7 is initialised to: "<< s7 << std::endl;

    // std::cout << "Comparison---------------------" << std::endl;
    // std::cout << std::boolalpha << std::endl;
    // std::cout << s1 << "==" << s5 << ": " << (s1 == s5) << std::endl;
    // std::cout << s1 << "==" << s2 << ": " << (s1 == s2) << std::endl;
    // std::cout << s1 << "!=" << s2 << ": " << (s1 != s2) << std::endl;
    // std::cout << s1 << "<" << s2 << ": " << (s1 < s2) << std::endl;
    // std::cout << s2 << ">" << s1 << ": " << (s2 > s1) << std::endl;
    // std::cout << s4 << "<" << s5 << ": " << (s4 < s5) << std::endl;
    // std::cout << s1 << "=="  << "Apple"  << ": " << (s1 == "Apple") << std::endl;

    // std::cout << "Asignment---------------------" << std::endl;
    // s1 = "Watermelon";
    // std::cout << "s1 is now " << s1 << std::endl;
    // s2 = s1;
    // std::cout << "s1 is now " << s2 << std::endl;
    // s3 = "Cell";
    // s3[0] = 'S';
    // std::cout << "s3 is now " << s3 << std::endl;
    // s3.at(0) = 'B';
    // std::cout << "s3 is now " << s3 << std::endl;

    // s1 = "Watermelon";
    // std::cout << "Concatenation-------------------" << std::endl;
    // s3 = s5 + " and " + s2 + " juice"; // Apple and Banana juice
    // std::cout << "s3 is now " << s3 << std::endl;

    // std::cout << "Looping-------------------" << std::endl;
    // // for loop
    // s1 = "Apple";
    // for (size_t i {0}; i < s1.length(); ++i)
    // {
    //     std::cout << s1.at(i);
    // }
    // std::cout << std::endl;

    // // Range base for loop
    // for (char c:s1)
    // {
    //     std::cout << c;
    // }
    // std::cout << std::endl;

    // std::cout << "Substring -----------------" << std::endl;
    // s1 = "This is a test";
    // std::cout << s1.substr(0,4)<< std::endl;
    // std::cout << s1.substr(5,2)<< std::endl;
    // std::cout << s1.substr(10,4)<< std::endl;

    // std::cout << "Erase -----------------" << std::endl;
    // s1 = "This is a test";
    // s1.erase(0,5); // Erase this from s1 = "is a test"
    // std::cout << "s1 is now " <<s1<< std::endl;

    // std::cout << "getline -----------------" << std::endl;
    // std::string full_name{};

    // std::cout << "Enter your full name: " << std::endl;
    // getline(std::cin, full_name);
    // std::cout << "Your full name is: "<< full_name << std::endl;

     std::cout << "Find -----------------" << std::endl;
     s1 = "The secret word is Boo";
     std::string word{};

     std::cout << "Enter the word to find:" << std::endl;
     std::cin >> word;

     size_t position = s1.find(word);
     if (position != std::string::npos)
     {
         std::cout << "Found " << word << " at position " << position << std::endl;
     }
     else
     {
         std::cout << "Sorry, " << word << " not found" << std::endl;
     }

    
    return 0;
}