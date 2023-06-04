
#include <iostream>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x{10};
    int y{200};

    
    std::cout << "x " << x <<", "<< y << std::endl;
    swap(&x, &y);
    std::cout << "x " << x <<", "<< y << std::endl;

    




    return 0;
}