/**Passing Dynamically allocated memory as return value by reference
 * Passing back return value using refernce
 */
#include <iostream>

//------------------
int &squareRef(int);
int *squarePtr(int);
//------------------

int main()
{
    int number = 8;
    // returning a pointer
    std::cout << "In main number: " << number << std::endl;
    int *numberPtr = squarePtr(number);
    std::cout << ": " << *numberPtr << std::endl;

    

    // returning a reference
    std::cout << "squareRef(number): " << squareRef(number) << std::endl;

    return 0;
}

int *squarePtr(int number)
{
    int *dynamicallyAllocatedResult = new int(number * number);

    return dynamicallyAllocatedResult;
}
int &squareRef(int number)
{
    int *dynamicallyAllocatedResult = new int(number * number);

    return *dynamicallyAllocatedResult;
}