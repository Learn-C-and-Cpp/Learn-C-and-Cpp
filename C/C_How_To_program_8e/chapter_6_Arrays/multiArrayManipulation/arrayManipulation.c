/* multi array manipulations to print data in a tabular formart
 * 1. create array of studens(rows) and exams(columns) 3 by 4 array studentGrades[3][4]
 * 2. PrintArray function (pass array,students, and exam) 
 * 3. determine the smallest and largest values
 * 4. calculate the avarage grade for eache student
*/
#include<stdio.h>

#define STUDENTS 3 // ROW
#define EXAMS 4 // COLUMN/grade

// function prototypes
int minimum(const int grade[][EXAMS] ,size_t pupils, size_t test);
int maximum(const int grade[][EXAMS] ,size_t pupils, size_t test);
double avarage(const int setOfGrades[], size_t test);
void printArray(const int grade[][EXAMS],size_t pupils, size_t test );

// function main begins program execution
int main()
{
     
    // initialize student grades for three students(rows) 
    int studentGrades[STUDENTS][EXAMS] =
         {
             { 77, 68, 86, 73 }, // student 1
             { 96, 87, 89, 78 }, // student 2
             { 70, 90, 86, 81 }}; // student 2

    // output array studentGrades
    puts("The array is:");

    printArray(studentGrades, STUDENTS, EXAMS);

    // determine the smallest and largest values
    printf("\n\nLowest grade: %d \nHighest grade: %d\n",
         minimum(studentGrades, STUDENTS, EXAMS),
         maximum(studentGrades, STUDENTS, EXAMS));
    
    // calculate the avarage grade for eache student
    for (size_t student = 0; student < STUDENTS; ++student)
    {
        printf("The avarage grade for student %u is %.2f\n", student, avarage(studentGrades[student], EXAMS));

    }
    
    

    return 0;
}

// determing the lowest grade of any student for semester
int minimum(const int grade[][EXAMS] ,size_t pupils, size_t test)
{
    int lowGrade = 100; // initialize to highest possible grade
    // loop through rows of grades
    for(size_t i = 0; i < pupils; ++i)
    {
        // loop through coulmns of grades
        for(size_t j = 0; j < test; ++j)
        {
            if(grade[i][j] < lowGrade) // compare with lowGrade
            {
                lowGrade = grade[i][j];

            }

        }
    }
    return lowGrade; // return minimum grade 
}

// determing the highest grade or any student for semester
int maximum(const int grade[][EXAMS] ,size_t pupils, size_t test)
{
    // inintialize high grade 
    int highGrade = 0;

    //loop through rows of grades
    for (size_t i = 0; i < pupils; ++i)
    {
        for (size_t j = 0; j < test; ++j)
        {
            if (grade[i][j] > highGrade)
            {
                highGrade = grade[i][j];
            }
            
        }
        
    }
    return highGrade; // return maximum grade
    
}

// determine the avarage of a particular student
double avarage(const int setOfGrades[], size_t test)
{
    int total = 0; // sum of tests grades

    // total all grades  for one student
    for (size_t i = 0; i < test ; ++i)
    {
        total += setOfGrades[i];
    }
    return (double)total / test; // avarage   
    
}

// output the two-dimensional array in tabula format
void printArray(const int grade[][EXAMS], size_t pupils, size_t test)
{
    // output column heads
    printf("%s", "                 [0]  [1]  [2]  [3]");


 for(size_t pupils = 0; pupils < STUDENTS; ++pupils) // print rows
 {
     //output lable for row
     printf("\nstudentGrades[%u] ", pupils);
     //print columns
    for (size_t test = 0; test < EXAMS; ++test)
     {
       printf("%-4d ", grade[pupils][test]);
     }
     puts(""); // print new line        

}  

}
