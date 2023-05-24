/*  a program to compute mean, median and mode
    This is a survey analysis with c arrays
    program structure
    1.calculate avarage/mean = total data / number of data 
    2.sort the array
    3.determine median (the midle number in a sorted data from least to greatest.)
    4.determing mode (most occuring number in a data set)

 */
#include <stdio.h>
#define SIZE 99

// function prototypes
void mean(unsigned const int dataSet[]); // none negative and cannot be changer by the function
void median(unsigned int dataSet[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(int dataArray[]);
void printDataSet(unsigned const int dataSet[]);

int main(void)
{
    //initialize array frequency
    unsigned int freq[10] = {0};

    // initialize dataSet
    unsigned int dataSet[SIZE] =
        {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
         7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
         6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
         7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
         7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
         4, 5, 6, 1, 6, 5, 7, 8, 7};

    // process response
    mean(dataSet);
    median(dataSet);
    mode(freq, dataSet);

    return 0;
}

// calculate avarage of all response values
void mean(unsigned const int dataSet[])
{
    printf("%s\n%s\n%s\n", "********", " Mean", "********");

    unsigned int total = 0;           // variable to hold sum of array elements
    for (size_t j = 0; j < SIZE; ++j) // add each item to the total
    {
        total += dataSet[j];
    }
    printf("The mean is the avarager values of the data\n"
           "items. The mean is equal to the total of\n"
           "all the items divided by ghe numbe or the\n"
           "data items (%u). The mean value for \n"
           "this run is; %u / %u = %.4f\n",
           SIZE, total, SIZE, (double)total / SIZE); // total is unsigned int use %u to print
}

// sorting the data set
void bubbleSort(int dataArray[])
{
    // loop to control the number of passes (one scan left to right of array is called a pass)
    for (size_t pass = 1; pass < SIZE; ++pass)
    {
        //loop to control number of comparisons pser pass
        for (size_t j = 0; j < SIZE - 1; ++j)
        {
            if (dataArray[j] > dataArray[j + 1])
            {
                //swap the elements
                unsigned int temp = dataArray[j];
                dataArray[j] = dataArray[j + 1];
                dataArray[j + 1] = temp;
            }
        }
    }
}

// the median is the meddle value 
void median(unsigned int dataSet[])
{
    printf("%s\n%s\n%s\n", "********", " Median", "********");

    // output unsorted data array
    printDataSet(dataSet);

    bubbleSort(dataSet); // output sort data array

    printf("%s", "\n\nThe sorted array is");
    printDataSet(dataSet); // output sorted data array

    //display median from a sorted array pick the middle element 
    printf("\n\nThe median is element %u of\n"
           "the sorted %u element array.\n"
           "For this run the median is %u \n\n",
           SIZE / 2, SIZE, dataSet[SIZE / 2]);
         puts("");
           
}

// determine the most frequent response value
void mode(unsigned int freq[], unsigned const int dataSet[])
{
    printf("\n%s\n%s\n%s\n", "********", "Mode", "********");

    // initialize frequensies to 0
    for (size_t rating = 1; rating <= 9; ++rating)
    {
        freq[rating] = 0;
    }

    // count the numper of responses for each type - summarize frequensies 
    for (size_t j = 0; j < SIZE; ++j)
    {
        ++freq[dataSet[j]];
    }

    // output headers for result columns
    printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequncy", "Histogram",
           "1   1   2   2", "5  0   5   0   5");

    //output results
    unsigned int lagest = 0;    // represents lagest frequency
    unsigned int modeValue = 0; // represents most frequent response

    for (size_t rating = 1; rating <= 9; ++rating)
    {
        printf("%8u%11u         ", rating, freq[rating]); // print rating and frequecies

        // keep track of mode value and largest frequency value
        if (freq[rating] > lagest)
        {
            lagest = freq[rating];
            modeValue = rating;
        }
        // output histogram bar representing frequency value
        for (unsigned int h = 1; h <= freq[rating]; ++h)
        {
            printf("%s", "*");
        }

        puts("");
    }

    // display the mode value
    printf("\nThe mode is the most frequent value.\n"
           "For this rum the mode is %u which occurred"
           " %u times.\n",
           modeValue, lagest);
}

void printDataSet(unsigned const int dataSet[])
{
    // output array contents
    for (size_t j = 0; j < SIZE; ++j)
    {
        if (j % 20 == 0) // begin new line every 20 values
        {
            puts("");
        }
        printf("%2u,", dataSet[j]);
    }
}