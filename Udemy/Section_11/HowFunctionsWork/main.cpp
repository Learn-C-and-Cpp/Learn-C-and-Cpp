#include <iostream>

void func2(int &result, int y, int z)
{
    result += y + z;
}

int func1( int a, int b)
{
    int result{};
    result = a + b;
    func2(result, a, b);
    return result;
}

int main()
{
    int x{10};
    int y{20};
    int z{};
    z = func1(x, y);
    std::cout << z << std::endl; 
    return 0;
}

/*  When main call func1()

    main:
    push space for the return value
    push space for the parameters
    push the return address
    trensfer control to func1(jump)

    func1:
    push the address of the previous activation record (stack pointer)
    push any register value that will need to be restored before returning to the caller
    perform the code in func1
    restore the register value
    restore the previous activation record(move the stack pointer) pop off
    store any function  results
    transfer control to the return address(jump)

    main: 
    pop the parameters
    pop the return value

*/
