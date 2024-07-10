//Debugger
#include<iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
  
}

int main()
{
   int i{5};

   while(i> 0)
   {
    std::cout << "number is: "<< i;
    i--;
   }

   int x{100}, y{200};
   std::cout << "\nx: "<< x << std::endl;
   std::cout << "y: "<< y << std::endl;
   int *xptr{&x};
   int *yptr{&y};

   
   swap(&x, &y);

   std::cout << "\nBy pointer : "<< x << std::endl;
   swap(xptr, yptr);

   std::cout << "\nx: "<< x << std::endl;
   std::cout << "y: "<< y << std::endl;
   
    return 0;
}

