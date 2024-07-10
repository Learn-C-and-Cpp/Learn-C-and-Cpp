// pring a multiplication table

#include<iostream>

int main()
{
    for(int i{1}; i <= 10; ++i) // 1-10
    {
        for (int j{1}; j <= 10; ++j) // 1-10
        {
            std::cout << i << " * " << j << " = " << i*j << std::endl;
        }
        std::cout <<"----------- "<< std::endl;        
    }    

    return 0;
}