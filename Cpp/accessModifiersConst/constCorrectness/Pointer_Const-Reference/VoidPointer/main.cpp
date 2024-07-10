/**void pointer is not associated with any type
 * Used to make data structures and functions which are more generic
 */
#include <iostream>

int main()
{
    int a = 5;
    double b = 3.2;
    void *p;
    std::cout << "size of void " << sizeof(p) << std::endl;
    p = &a;
    p = &b;

    char str[] = "String";
    char *c = &str[1];

    std::cout << *(c + 1) << std::endl;
    p = &str[1];
    //p = p+1;
    std::cout << *((char*) p )<< std::endl;

    return 0;
}