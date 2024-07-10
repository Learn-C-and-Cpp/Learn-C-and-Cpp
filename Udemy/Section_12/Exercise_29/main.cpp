#include <iostream>

void swap_pointers(int *ptr1, int *ptr2);

int main()
{
    int num1{}, num2{};
    std::cout << "Enter two integers separated by a space to swap" << std::endl;
    std::cin >> num1 >> num2;

    int *ptr_num1 = &num1;
    int *ptr_num2 = &num2;

    std::cout << "Before " << num1 << ", " << num2 << std::endl;
    // swap_pointers(&num1, &num2);
    swap_pointers(ptr_num1, ptr_num2);
    std::cout << "After " << num1 << ", " << num2 << std::endl;
    return 0;
}
void swap_pointers(int *ptr1, int *ptr2)
{
    *ptr1 = *ptr1 + *ptr2; // 15
    *ptr2 = *ptr1 - *ptr2; // 5
    *ptr1 = *ptr1 - *ptr2; // 15-5

    // int tmp = *ptr1;
    // *ptr1 = *ptr2;
    // *ptr2 = tmp;
}