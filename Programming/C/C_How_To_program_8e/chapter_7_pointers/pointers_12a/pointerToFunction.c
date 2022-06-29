// using function pointers to make decision
#include <stdio.h>

#define SIZE 4

// function portotypes
int operatorSelection();

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

// function main begins the program execution
int main()
{
    // difine and initialize an array of pointers to functions
    int (*fPtr[SIZE])(int, int) = {add, subtract, multiply, divide}; // function name is the function address

    // prompt user for two numbers
    printf("%s", "Enter value1  > ");
    int value1;
    scanf("%d", &value1);

    printf("%s", "Enter value2  > ");
    int value2;
    scanf("%d", &value2);
    printf("value1 = %d value2 = %d", value1, value2);
    puts("");

    // prompt user to enter the choice
    printf("%s", "Enter your choice: 0 for add, 1 for sub, 2 for mult, 3 div and  4 to end > ");
    size_t choise;
    scanf("%u", &choise);

    // process users choice

    while (choise >= 0 && choise < 4)
    {
        // invoke function at location choice in array fPtr and pass
        // choice, value1 and value2 as arguments

        printf("results = %d\n", (*fPtr[choise])(value1, value2));

        //return 0;
        // printf("%s", "Enter a number between 0 and 2, 4 to end > ");
        // scanf("%u", &choise);
        return 0;
    }
    puts("program execution completed");

    return 0;
}

// add x and y
int add(int x, int y)
{
    return (x + y);
}

// subtract x and y
int subtract(int x, int y)
{
    return (x - y);
}

// multiply x and y
int multiply(int x, int y)
{
    return (x * y);
}

// divide x and y
int divide(int x, int y)
{
    return (x / y);
}
