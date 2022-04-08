// demonstrating union data type
#include<stdio.h>

// define union number
union number
{
    int x;
    double y;
};

int main(void)
{
    // define union variable
    union number value;
    value.x = 100; // assign 100 to member x
    printf("int x %d\n double y %f\n", value.x, value.y);

    value.y = 100.0; // assign 100.0 to member y
    printf("int x %d\n double y %f\n", value.x, value.y);

    return 0;
}