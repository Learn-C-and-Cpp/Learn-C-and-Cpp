#include <iostream>
#include <vector>
#include <string>


int main()
{
    int num{88};
    std::cout << "Value of num is: "<< num << std::endl;
    std::cout << "Size of num is: " << sizeof num << std::endl;
    std::cout << "Address of num is :"<< &num << std::endl;

    std::cout << " "<< std::endl;

    int *p;
    std::cout << "Value of p is: "<< p << std::endl;
    std::cout << "Size of p is: " << sizeof p << std::endl;
    std::cout << "Address of p is :"<< &p << std::endl;
    
    p = nullptr;
    std::cout << "Value of p is: "<< p << std::endl;

    std::cout << " "<< std::endl;
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    std::vector<std::string> *p4{nullptr};
    std::string *p5{nullptr};

std::cout << "\nSize of p1 is: " << sizeof p1 << std::endl;
std::cout << "Size of p2 is: " << sizeof p2 << std::endl;
std::cout << "Size of p3 is: " << sizeof p3 << std::endl;
std::cout << "Size of p4 is: " << sizeof p4 << std::endl;
std::cout << "Size of p5 is: " << sizeof p5 << std::endl;

std::cout << " " <<std::endl;
int score{10};
double high_temp{1000.7};
int *score_ptr{nullptr};

score_ptr = &score;
std::cout << "Value of score is: " <<score <<std::endl;
std::cout << "address of score is: " << &score <<std::endl;
std::cout << "value of score_ptr: " << score_ptr <<std::endl;

double *tempt_ptr = {&high_temp}; // Dereferencing a pointer
std::cout << "value of tempt_ptr: " << *tempt_ptr <<std::endl;

*tempt_ptr = {200}; // Dereferencing a pointer
std::cout << "value of tempt_ptr: " << high_temp <<std::endl;

std::cout << " " <<std::endl;
std::string name{"Frank"};
std::string *string_ptr{&name};
std::cout << *string_ptr <<std::endl;
name = "James";
std::cout << *string_ptr <<std::endl;

std::cout << " " <<std::endl;
std::vector<std::string> *vector_ptr{nullptr};
std::vector<std::string> stooges {"Larry","Moe","Cully"};

std::cout << "Stoges: "<< stooges.at(0)<<std::endl;
std::cout << "Stoges: "<< stooges.size()<<std::endl;

vector_ptr = &stooges;
std::cout << "Stoges: "<< (*vector_ptr).at(0)<<std::endl;

std::cout <<""<<std::endl;
std::cout << "Stoges: " <<std::endl;
for(auto stooges: *vector_ptr)
{
    std::cout << stooges <<std::endl;
    std::cout <<""<<std::endl;
    
}




    return 0;
}