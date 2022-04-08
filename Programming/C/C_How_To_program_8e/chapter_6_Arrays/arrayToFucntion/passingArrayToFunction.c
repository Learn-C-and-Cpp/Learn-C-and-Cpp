//passing an array to a function
#include<stdio.h>
#define SIZE 5

// fucntion prototype should indicate that an array will be passed
void modifyArray(int a[], size_t size);

//modify an arry element
void modifyArrayElement(int element); // passing an element of an array

// usin a const in an array qualifier
void tryModifyArray(const int b[]);


int main()
{
    
    int hourlyTemperature[SIZE] = {0, 1, 2, 3, 4}; // array name equals to the address of the array's first element
    
    // passing the entire array
    modifyArray(hourlyTemperature, SIZE);
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%3d",hourlyTemperature[i]);
    }
    puts("");
    //passing an array element  hourlyTemperature[2] by value
    modifyArrayElement(hourlyTemperature[2]);
    //print out array element 
    printf("print out array element a[2] = %d\n", hourlyTemperature[2]);

    // tryModifyArray
    tryModifyArray(hourlyTemperature[2]);

    return 0;
}
void modifyArray(int a[], size_t size)
{
    for(size_t i = 0; i < SIZE; ++i)
    {
        a[i] *= 2;
    }
    //printf("value = %d", a[i]);
}
//modifying an array element
void modifyArrayElement(int element)
{
    printf("value in modify element is = %d",element *= 2);
}

// implementing tryModifyArray
void tryModifyArray(const int b[])
{
    b[2];

}