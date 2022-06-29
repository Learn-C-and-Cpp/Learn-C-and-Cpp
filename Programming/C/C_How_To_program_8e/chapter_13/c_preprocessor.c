// #define proprocessor directive - is used to create a sybolic constants and macros.
// Symbolic constant is a name for a constant. 

#include <stdio.h> // the location search is peformed in an implementation-dependent manner
                   // normally through predesignated compiler and system directoreis.

#include <assert.h> // assetion sind logig errors during program development 
#define PI 3.14159 // define symbolic constant
//#define MY_CONSTANT 5
// macro definition with one argument. calculate the are or a circle
#define CIRCLE_AREA(x) ((PI) * (x) * (x)) // one argument macro
#define RECTANGLE_AREA(x, y) ((x) * (y))  // two arguments macro

//#define IS_BIGGER(x, y)((x > y) y : x)

//#define display(int) add(int, int)

#if !defined(MY_CONSTANT) // define if no defined
#define MY_CONSTANT 10
#endif // end #if

#ifndef DEBUG
#define DEBUG
#endif

//no debug
#define NDEBUG

//#error tokens // print an implementation-dependent message includig specified tokens  
//#error 1 - Out of range error
#pragma token // coauses an implementation-defined action. 

// # and ## Operators
#define HELLO(x) puts("Hello, " #x);
#define TOKENCONCAT(x, y) x ## y // concantnate two tokens

// Line numbers
#line 3000

// Predefined Symbolic Constants
// __LINE__ // The line number of the current source-code line
// __FILE__ // The nane of the source file(a string)
// __DATE__ // The date the source file was compiled(a string of the form "Mmm dd yyyy")
// __TIME__ // The time the source file was compiled(a string literal of the form "hh:mm:ss")
// __STDC__ // The value 1 if compiler supports Standard C; 0 otherwise. 

// Assertions
//assert(expresion) // expression to test

// tasks
#define YES 1

#if defined (TRUE)
#undef TRUE
#define TRUE 1
#endif

#if TRUE 
#define FALSE 0
#else 
#define FALSE 1
#endif


int main(void)
{
    
    #ifndef NDEBUG
    #define NDEBUG
    int test = 11;
    assert(test <= 10);  // Exeption 
    #endif
 
#if 1 // out comment if 0 else compile if 1
    double area = CIRCLE_AREA(4);
    int rectArea = RECTANGLE_AREA(0 + 2, 0 + 2);

    printf("%lf\n", area);
    printf("%d\n", rectArea);
    printf("%d\n", MY_CONSTANT);
#endif

// define Debug
#ifdef DEBUG
    printf("PI = %f", PI);
#endif

puts("");
// # and ## operator
HELLO(John); 
//TOKENCONCAT(O, K);

 printf("__LINE__ = %d\n", __LINE__);
 printf("__DATE__ = %s\n", __DATE__); 
 printf("__TIME__ = %s\n", __TIME__);
 printf("__FILE__ = %s\n", __FILE__);  
 printf("__STDC__ = %s\n", __STDC__); 
 

    return 0;
}
