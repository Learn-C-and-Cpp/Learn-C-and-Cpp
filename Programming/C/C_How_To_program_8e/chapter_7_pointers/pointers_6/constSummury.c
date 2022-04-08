/* non-const to non-const data -> highest level of data access 
   (data can be modified using a dereference pointer) and the pointer 
   can be modified o point other data items.
 * constant to non-constant data -> always points to the same memory location and data at that 
   location can be modified
 * non-const to constant data -> can modified to point to other data of appropriate type 
   but data pointed to cannot be modified.
 * constant pointer to constant data -> the least access privilege  such pointer always points
   to the same momory location and data at that memory location cannot be modified.


*/

#include<stdio.h>
#include<ctype.h>


// funtion prototypes non-const to non-const pointer and data modified
void convertToUppercase(char *sPtr);

//non-const pointer to constant data
void printCharacters(const char* sPtr);

// non-constant pointer to constant data
void func(const int* nPtr); 

// constant pointer to non-constant data default for array name
void constantPointer(int  *const aPtr);

// constant pointer to constant data
void arrayfunc(const int *const ptr);



// function main begins the program execution
int main()
{
    
    // initilize character array
    char string[] = "cHaRaCters and $32.98";

    printf("\nThe string before converting is: %s\n",string);
    convertToUppercase(string);
    printf("\nThe string after converting is: %s\n",string);

     
    // initilize char array
    char sArray[] = "print characters of a string";
    puts("The string is: ");
    printCharacters(sArray); // print out string
    puts("");

    // non-constant pointer to constant data
    int y; // define y
    func(&y);

    // constant pointer to non-constant data default for array name
    int x; // define x
    int y1; // define y

    // ptr in a const pointer an integer that can be modified
    int * const xPtr = &x; // const pointer must be initialized when they are defined
    constantPointer(&x);
    
    //constant pointer to constant data 
    int xx = 5; // define xx
    int yy; // define yy

    const int *const ptr = &xx;

    arrayfunc(&yy);


    
    return 0;
}
// the function processes the array string pointed to by sPtr one character at a time
void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0') // while not end of string '\0'
    {
       *sPtr = toupper(*sPtr); // convert to uppercase
        ++sPtr; // make sPtr point to next charater
    }
    

}
// process elements withouto modifying them: pointer is not constant:  NB// sPtr cannot modify char it points
void printCharacters(const char* sPtr)
{
    // output each character untill the null character is encountered
    for (; *sPtr != '\0'; ++sPtr) 
    {
             
       printf("%c", *sPtr);
                
    }
    
}

// non-constant pointer to constant data
void func(const int *nPtr)
{
   // *nPtr = 100; //error: assignment of read-only location ‘*nPtr’

}
// an exampe or array can change values but not its address
void constantPointer(int  *const aPtr)
{
    *aPtr = 7;
    *aPtr = 12; // can assign new value but not a new address 
    
}
// ptr is a constant pointer to an integer conastant: memory location and data cannot be changed. 
void arrayfunc(const int *const ptr)
{
    int a;
    //*ptr = 5; // error: assignment of read-only location ‘*(const int *)ptr’
    //*ptr = 7; // cannot change data
    //ptr = &a; // cannot change location
    
    printf("array at indes  %u = %d", ptr[0]);
    
}
