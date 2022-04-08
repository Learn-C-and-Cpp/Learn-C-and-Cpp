// passing structure members as arguments

#include<stdio.h>

//define structure student
struct student
{
    char *name;
    int age;
    int roll_num;
    float points;
};

 void print(char *name, int age, int roll, float points);

 // call by reference
 void printByReference(char *name, int *age, int *roll, float *points);  

int main(void)
{
    struct student s1 = {"mic", 18, 50, 80.5};
    
   // call by values
    print(s1.name, s1.age, s1.roll_num, s1.points);
    
    puts("");
    // call by reference
    printByReference(s1.name, &s1.age, &s1.roll_num, &s1.points);
    puts("");
    
    return 0;
}

void print(char *name, int age, int roll, float points)
{
    puts("Call by value");
    printf("%s %d %d %.2f", name, age, roll, points);
}

// pass by reference
void printByReference(char *name, int *age, int *roll, float *points)
{
   puts("Call by reference");
   printf("%s %d %d %.2f", name, *age, *roll, *points);

}  

