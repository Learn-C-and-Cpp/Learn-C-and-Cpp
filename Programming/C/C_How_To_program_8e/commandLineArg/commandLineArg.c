#include<stdio.h>
#include<stdlib.h>


int main(int argc, char **argv)
{
    printf("Hello world - %d\n", argc);
    for (size_t i = 0; i < argc; i++)
    {
        printf("arg %d - %s, %i,%lf\n", i, argv[i], atoi(argv[i]), atof(argv[i]));
    }
    

}