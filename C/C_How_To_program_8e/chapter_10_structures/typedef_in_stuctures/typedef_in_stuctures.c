// using typedef
#include<stdio.h>
// define struct
struct abc
{
    int a;
    int b;
};
typedef struct abc ABC; // synonym for abc
typedef ABC* abcPtr; // synonym for ABC*

int main(void)
{
    ABC a ={0, 1};
    abcPtr startPtr = &a; 

    // startPtr can be deference to access a 
    printf("%d %d", (*startPtr).a, startPtr->b); 

    return 0;
}