#include<iostream>
#include<string>
#include<vector>

void display(const std::vector<std::string> *const v)
{
    for(auto str: *v)
    {
        // (*v).at(0) = "Tommy";          // can't change the .at(0) because the vector is constant
        std::cout << str<< " ";
        //  v = nullptr;                 // can't change,  the pointer is constant
    }
    std::cout <<" " <<std::endl;

}

void display(int *array, int sentinel)
{
    while (*array != sentinel)
    {
        std::cout << *array++ <<" ";
    }
    std::cout <<" "  <<std::endl;   

}

int main()
{
    std::cout << " " <<std::endl;
    std::vector<std::string> stooges{"Larry", "More", "Curly"};

    display(&stooges);   

    std::cout <<" " <<std::endl;
    int scores[]{100, 98, 97, 79,85, -1};
    display(scores, -1);


    return 0;
}

