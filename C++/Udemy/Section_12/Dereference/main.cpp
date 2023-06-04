// deferencing

#include <iostream>
#include <vector>
#include <string>

int main()
{
    int score{500};
    int *score_ptr{&score};

    std::cout << "*score_ptr: " << *score_ptr << std::endl;

    *score_ptr = 200;

    std::cout << "*score_ptr " << *score_ptr << std::endl;

    std::cout << "score : " << score << std::endl;
    std::cout << "..........................." << std::endl;

    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    std::cout << "*temp_ptr " << *temp_ptr << std::endl; // 100.7
    temp_ptr = &low_temp;
    std::cout << "*temp_ptr " << *temp_ptr << std::endl; // 37.4
    std::cout << "..........................." << std::endl;

    std::string name{"Frank"};
    std::string *string_ptr{&name};
    std::cout << "*string_ptr " << *string_ptr << std::endl;

    name = {"James"};
    std::cout << "*string_ptr " << *string_ptr << std::endl;


    //pointer and what it is pointing to
    std::cout << "..................." << std::endl;

    std::vector<std::string> students{"Larry", "Moe", "Curly"};
    std::vector<std::string> *verctor_ptr{nullptr};
    verctor_ptr = &students;

    std::cout << "First students " << (*verctor_ptr).at(0) << std::endl;
    
    // loop through vector
    std::cout << "..................." << std::endl;
    for(auto student: *verctor_ptr)
    {
        std::cout << student << std::endl;

    }











    std::cout << std::endl;
    return 0;
}