#include <iostream>

int main()
{
    int score[]{100, -1, 98, 95, 89, -1};
    //    std::cout << *(score + 0) << std::endl;
    int *score_ptr{score};
    //  std::cout << *(score_ptr + 2) << std::endl;

    while (*score_ptr != -1)
    {
        std::cout << *score_ptr << std::endl;
        score_ptr++;
    }

    return 0;
}