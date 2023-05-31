// Function overloading

#include <iostream>
#include <vector>
#include <string>

void print(int);
void print(double);
void print(std::string);
void print(std::string, std::string);
void print(std::vector<std::string>);

int main()
{
    print(100); // int
    print('A'); // promote char to int 65 for ASCII('A')
    print(123.5); 
    print(123.3F); // promote float to a double
    print("C-style string"); // C-style string is converted to a C++ string object
    
    std::string s{"C++ string"};
    print(s); // C++ string 
    print("C-style string", s); // 1st argument is converted to C++ string object

    std::vector<std::string> three_stooges{"Larry","Moe", "Curlly"};
    print(three_stooges);





    return 0;
}

void print(int num)
{
    std::cout << "Printing int " << num << std::endl;
}
void print(double num)
{
    std::cout << "Printing double " << num << std::endl;
}

void print(std::string s)
{
    std::cout << "Printing string " << s << std::endl;
}

void print(std::string s, std::string str)
{
    std::cout << "Printing 2 strings " << s << " and  " << str << std::endl;
}

void print(std::vector<std::string> vec)
{
    std::cout << "Printing vector of strings " << std::endl;
    /*the std::vector class does not provide an overloaded stream insertion (<<) operator by default.
     Therefore, you cannot directly output the vector using std::cout. Instead, you need to iterate
     over the elements of the vector and output them individually.*/
    for (const std::string &s : vec)
    {
        std::cout << s + " ";
    }
    std::cout << std::endl;
}
