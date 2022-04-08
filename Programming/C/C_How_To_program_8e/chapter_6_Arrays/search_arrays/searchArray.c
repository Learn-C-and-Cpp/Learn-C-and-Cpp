#include<stdio.h>
#define SIZE 5
#define APPEARENCE 6
int main()
{
    int array[SIZE] = {0, 2, 2, 3, 2,};
    int frequency[APPEARENCE] = {0};
    for(size_t i =0; i < SIZE; ++i)
    {
        printf("%d",array[i]);
    }
    puts("");
    for (size_t i = 1; i < APPEARENCE; i++)
    {
        ++frequency[array[i]];
    }
    printf("%s%17s\n", "rating", "frequency");

    for (size_t i = 0; i < APPEARENCE; i++)
    {
        printf("%6d%17d\n", i, frequency[i]);
    }
    

    return 0;
}