#include <iostream>
void swap(int *x, int *y);
int main()
{
    char l = 'l';
    char m;
    m = l + 1; // 01101100 + 00000001

    std::cout << "sizeof(l): " << sizeof(l) << std::endl;
    std::cout << "m = l + 1 : " << sizeof(m) << " m is " << m << std::endl;

    std::cout << "--------------------" << std::endl;
    int a = 10, b = 20;
    std::cout << a << " : " << b << std::endl;
    swap(&a, &b);
    std::cout << a << " : " << b << std::endl;

    return 0;
}

void swap(int *x, int *y) // int *x and int *y points to variables &a and &b
{
    int tmp = *x; // dereference x and store in tmp
    *x = *y;      // dereference y and store value in variable pointed to by int *x.
    *y = tmp;     // store tmp in the variable pointed to by int *y.
}