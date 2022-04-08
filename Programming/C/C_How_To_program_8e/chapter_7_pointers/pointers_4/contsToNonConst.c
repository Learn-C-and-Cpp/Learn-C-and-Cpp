// attemp to modify data through a 
// non-constant pointer to canstant data.

#include<stdio.h>

// function protypes
void func(const int *xPtr);  // *xPtr is a pointer to  an integer canstant  

// function main begins program execution
int main()
{

    // define y
    int y;

    // func attempts illegal modification
    func(&y);

    return 0;
}

// *xPtr cannot be used to modify the 
//value or the variable to which it points

void func(const int *xPtr) // pointer to integer constant
{
    // *xPtr = 100; // connot modify constant data

}
