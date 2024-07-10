/** Pointers, References and Dynamic Memory Allocation(PRDMA)
 * prefix = numberPtr
 * suffix = pNumber;
 * address-of-operator(&) operates on a variable and returns the address of the variable
 * The indirection/dereferencing operator(*) operates on a pointer variable and returns the value stored in the address of the variable
 * The address of operator(&) can only be used on the RHS
 * indirection/dereferencing operator(*) can be used on both the RHS and LHS
 * e.g RHS(temp = *pNumber) and LHS (*pNumber = 99) 
 * Reference is like a const pointer(int* const ptr), it's contents connot be changed(address it points to ) 
 * Passing reference in/out of the functions allow the called function access variables in the caller directily.
 */
#include <iostream>
int square(int& n)
{
    std::cout <<"&nq "<< &n <<std::endl;
    return n * n;
}

int main()
{
    int x = 88; 
    int *xPtr = &x; //the address of operator(&) can only be used on the RHS  
    std::cout <<" x "<<  x << std::endl;
    std::cout << "&x "<< &x << std::endl;
    std::cout << "xPtr " << xPtr << std::endl;
    std::cout << "&xPtr " << &xPtr << std::endl;
    std::cout << "*xPtr " << *xPtr << std::endl;

    std::cout<< "Reference/Aalis " << std::endl;

    int number1 = 55, number2 = 22;
    // int *number1Ptr = &number1;
    // *number1Ptr = 99;
    // std::cout << "*number1Ptr  " << *number1Ptr << std::endl;
    // std::cout << "&number1  " << &number1 << std::endl;
    // std::cout << "number1Ptr " << number1Ptr << std::endl;

    // number1Ptr = &number2;
    // std::cout << "*number1Ptr  " << *number1Ptr << std::endl;
    
    // creating a reference
    int & refNumber1 = number1; // implicit referencing (NOT &number1)
    std::cout << "refNumber1 " << refNumber1 << std::endl;
    refNumber1 = 11; // Implicit deferencing (NOT *refNumber1)
    std::cout << "&number1 " << &number1 << std::endl;
    std::cout << "&refNumber1 " << &refNumber1 << std::endl;
    refNumber1 = number2;
    std::cout << "number1 " << number1 << std::endl;
    number2++;
    std::cout << "refNumber1 " << refNumber1 << std::endl;
    std::cout << "number1 " << number1 << std::endl;
    std::cout << "number2 " << number2 << std::endl;


    int sq = 8;
    std::cout << square(sq) <<std::endl;
    std::cout << "sq "<< sq <<std::endl;
    std::cout << "&sq" << &sq <<std::endl;


    

    


    return 0;
}