// applaying sizeOfOperator to an array
#include<stdio.h>

#define SIZE 20
// function prototypes
size_t getSize(float *ptr);

void standardDataTypesSizes();

// function main begins program execution
int main()
{
    float array[SIZE]; // create array
    double real[22];
    printf("The number of bytes in the array  is %u"
        "\nThe number or bytes returned by getSize is %u\n", sizeof(array), getSize(array));

        printf("The number of bytes in the array  is %u"
        "\nThe number or bytes returned by getSize is %u\n", sizeof(real[0]) , sizeof(real));

    puts("");
    puts("Using operator sizeof to determine standard data type sizes");

    // print size of standard data types 
    standardDataTypesSizes();
    

    return 0;
}
// passing pointer to the beging of an array to a function returning  size of type size_t 
size_t getSize(float *ptr)
{
    return sizeof(ptr);
}
// Using operatoer sizeof to determine standard data type sizes
void standardDataTypesSizes()
{
    int i;
    char c;
    short s;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20]; // create array of 20 int elements
    int *ptr = array; // create pointer to array

    printf("    sizeof c = %u\tsizeof(char) = %u"
           "\n    sizeof s = %u\tsizeof(short) = %u"
           "\n    sizeof i = %u\tsizeof(int) = %u"
           "\n    sizeof l = %u\tsizeof(long) = %u"
           "\n    sizeof ll = %u\tsizeof(long long) = %u"
           "\n    sizeof f = %u\tsizeof(float) = %u"
           "\n    sizeof d = %u\tsizeof(double) = %u"
           "\n    sizeof ld = %u\tsizeof(long double) = %u"
           "\n    sizeof array = %u"
           "\n    sizeof ptr = %u\n",
           sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i, sizeof(int),
           sizeof l, sizeof(long), sizeof ll, sizeof(long long), sizeof f, sizeof(float),
           sizeof d, sizeof(double), sizeof ld, sizeof(long double), sizeof array, sizeof ptr);


           size_t n = sizeof(array);
           size_t x = sizeof ptr; 
           printf("n = %u\n", n);
           printf("x = %u\n", x);

           printf("%u\n",sizeof(array)/sizeof(array[0]));
           printf("%u\n",sizeof array / sizeof(*array));// size of the first element of an array
           printf("size of the first element of an array = %u\n", sizeof(*array));
           printf("size of value = %u\n", sizeof 2);
        
}
