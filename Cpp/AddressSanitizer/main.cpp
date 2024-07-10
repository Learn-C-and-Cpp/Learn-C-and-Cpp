// AddressSanitizer

#include <iostream>
#include <stdio.h>

int returnValue()
{
    int *arr = new int[100];
    return arr[100];
}



int main()
{
   
   int *arr = new int[100];
  for(int i = 0; i<100; i++)
  {
  	arr[i] = 0;
  }
   // int arr_value = returnValue();

    //std::cout << "arr = "<< arr_value << std::endl; // allocate array of 100 integere
    arr[100] = 44;

   std::cout << "arr = "<< arr[100 -1] << std::endl; // allocate array of 100 integeres

   delete []arr;

   return 0;
}
