#include<iostream>
#include<string>
#include<vector>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x{100},y{200};
    std::cout << "X " << x <<std::endl;
    std::cout << "Y " << y <<std::endl;

    swap(&x, &y);
    std::cout << "X " << x <<std::endl;
    std::cout << "Y " << y <<std::endl;

    return 0;
}

