/* const qualifier informs the compiler that the value of a
   particlar variable should not be modified. 
   constant is a value that dose not change / should not be changed 
   once defined cannot change later in the code
   const keyword in pointers
   1.non-constant to costant (pointer in not constant data is const)=  int const *p; / const int *p;
   2.constant to non-constant (pointer is constant not the data)= int *const p; 
   3.constant to constant (both pointe and data are constant)  = const int *const p; 
*/
#include<stdio.h>
// function prototypes

// funcion main begins program execution
int main()
{

   //1.non-constant to costant (pointer in not constant data is const)=  int const *p; / const int *p;
    int x = 12;
    const int *xPtr; // pointer is not const
    xPtr = &x;
    ++xPtr; //works
    // (*p)++;// increment of read only location is illegal

    //2.constant to non-constant (pointer is constant not the data)= int *const p; 
    int y = 10; 
    int *const p = &y;
    // ++p; cannot increment a read-only variable
    (*p)++; //can change the value

   // 3.constant to constant (both pointe and data are constant)  = const int *const p; 

    const int z = 123;
   
   const int *const zPtr = &z;
   // p++; //cannot change a read-only variable
   (*p)++; 




    
    
    


    return 0;
}




