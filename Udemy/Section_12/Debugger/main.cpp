#include <iostream>
#include <vector>
#include <string>

void swap(int *x, int *y);

int main()
{
    int i{5};
    while (i > 0)
    {
        std::cout << i << std::endl;
        --i;
    }

    int x{100}, y{200};
    std::cout << "x: " << x << ", y: " << y << std::endl;

    swap(&x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;

    return 0;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}