#include <stdio.h>

// pass by value
void doit(int *x)
{
    *x = 5;
}
void build_array(int * array_var, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        array_var[i] = i;
    }
    
}

int main()
{
    int z = 27;
    doit(&z);
    printf("z is now %d",z);

    // init array
    int values[50];
    printf("value at 7 %d",values[7]);

    build_array(values, 50);
    printf("value at 7 %d",values[7]); 



    return 0;
}