/* Survey data analysis with arrays: computing the mean and mode of the data
   the working of an array including passing an array to function
   1.calculate mean = sum/total -> done
   2.calculate median -> done 
   3.calculate mode
   4.bubbleSort -> done
   5.print array -> done
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 99 // array size
#define NUMBER 8


//function prototypes 
// pass a constant array: elements cannot be change by the function body
void mean(const unsigned int answer[]); // mean the avarage of all numbers: sum/totalNumbers
void median(unsigned int response[]); // the middle value after sorting from least to gretest
void mode(unsigned int frequecy[], const unsigned int response[]); // mode is the most appearing number : count the frequency of a number
void bubbleSort(unsigned int response[]); // sort to get mediam
void printArray(const unsigned int a[]); // print the results


// function main begins the program execution
int main()
{
     unsigned int frequency[10] = {0}; // initilize array frequency 

     //test for mean
     unsigned int statistics[NUMBER] = {23,21,23,23,25,29,32,33};
     
     //initialize array response
     
     unsigned int response[SIZE] =
      { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
      7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
      6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
      7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
      6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
      7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
      5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
      7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
      7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
      4, 5, 6, 1, 6, 5, 7, 8, 7 };
          

      //prosess response
      mean(response); // passing the entire array: use array name

      //median
      median(response);

      //mode
      mode(frequency, response);
        
      //print new line
      puts("");

     return 0; 
}

// mean = calculate avarage of all response values : sum/totalNumbers
void mean(const unsigned int answer[])
{
     printf("%s\n%s\n%s\n","********", " Mean","********");

     unsigned int total = 0; // variable to hold sum of array elements

     //total response value
     for(size_t counter = 0; counter < SIZE; ++counter)
     {
          total += answer[counter];
     }

     printf("The mean is the avarage value of the data\n"
           "items. The mean is equal to the total of\n" 
           "all the data items devided by the numbe of\n"
           "data items %u. The mean value for\n"
           "this run is : %u / %u = %.4f\n",
           SIZE, total, SIZE,(double)total/SIZE);

} 

// determine the midian value after sorting the array from least to gretest
void median(unsigned int response[])
{
     printf("\n%s\n%s\n%s\n%s",
          "********","Median", "********",
          "The usorted array of responses is" );
     
     printArray(response); // output unsorted array

     bubbleSort(response); // output sorted array

     //out put sorted array
     printf("%s","\n\nThe sorted array is");
     printArray(response);

     //display median element
     printf("\n\nThe median is element %u of\n"
          "the sorted %u element array.\n"
          "For this run the median is %u\n\n",
          SIZE/2, SIZE, response[SIZE / 2]);
     
} 

// mode is the most appearing number : count the frequency of a number 
void mode(unsigned int frequency[], const unsigned int response[]) // mode take two arrays frequecy(1-9) and response
{
     printf("\n%s\n%s\n%s\n", "********","Mode", "********");

     //initilize frequencie to 0
     for (size_t rating = 1; rating <= 9; ++rating)
     {
          frequency[rating] = 0 ;
     }
     
     //summarize frequencies 
     for (size_t j = 0; j < SIZE; ++j)
     {
          ++frequency[response[j]];
     }

     //outPut headers for results coulumns
     printf("%s%11s%19s\n\n%54s\n%54s\n\n",
          "Response", "Frequecy", "Histogram",
          "1   1    2    2 ", "5    0    5    0    5");

     // output results
     unsigned int largest = 0; // reprsents largest frequency
     unsigned int modeValue = 0; // represents most frequent response

     for(size_t rating = 1; rating <= 9; ++rating)
     {
          printf("%8u%11u\n", rating, frequency[rating]);


                    // keep track of mode value and lagest frequency value
               if(frequency[rating] > largest)
               {
                    largest = frequency[rating];
                    modeValue = rating;
               }

               // out put histogram bar representating frequency value
               for(unsigned int h = 1; h <= frequency[rating]; ++h)
               {
                    printf("%s", "*");
               }
               puts(""); // being new line of output

               }

     // display the mode value 
     printf("\n The mode is the most frequent value.\n"
          "For this run the mode is %u which occurred "
          "%u times.\n", modeValue, largest);

}

// sort the array using bubble sort algorithm
void bubbleSort(unsigned int response[])
{
     //loop to control the passes
     for(size_t pass = 1; pass < SIZE; ++pass)
     {
          //compare adjucent and swap the elements if first element is greter than the second
          for(size_t i = 0; i < SIZE - 1; ++i)
          {
               if(response[i] > response[i + 1])
               {
                    unsigned int temp = response[i];
                    response[i] = response[i + 1];
                    response[i + 1] = temp;               
               }

          }
           
     }

}

// print array contents : 20 values per row
void printArray(const unsigned int response[])
{
     //output array contents
     for (size_t i = 0; i < SIZE; ++i)
     {
          if(i % 20 == 0) // begin new line every 20 values
          {
               puts("");
          }
          printf("%2u%c",response[i],',');
     }
     

} 





//void mode(unsigned int freg[],unsigned int answer[]); // mode is the most appearing number : count the frequency of a number
//void bubbleSort(int a[]); // sort to get mediam
