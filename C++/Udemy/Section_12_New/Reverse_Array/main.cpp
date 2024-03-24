
// Section 12 challenge

#include<iostream>
#include<string>

void reverse_array(int *arr, size_t size)
{
    int *start = arr;
    int *end = (arr + size - 1); 

    for (size_t i {0}; i < size ; i++)
    {
    
     std::cout << *end << " ";
     end--;           
    }

    std::cout <<"\nUsing while loop " << std::endl;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    

   // std::cout << "(arr + size - 1) : " << *end << std::endl;
    
    for (size_t i{0}; i < size; ++i)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << " " << std::endl;
    

}

std::string reverse_string( const std::string &input)
{
    std::string reversed;
    const char *start = input.c_str(); // pointert ot the first char
    const char *end = input.c_str() + input.size() -1; // pointer to the last char
    while (end >= start)
    {
        reversed.push_back(*end);
        end--;
    }
    return reversed;
    
}

int main()
{
    //int arr[]{10, 95, 88, 45, 75};
    int arr[]{1, 2, 3, 4, 5};
    size_t size {5}; 
    
    
    std::cout << size << std::endl;

    reverse_array(arr, size);

    // --------reverse string ---------
    std::string input = "Hello world:";
    std::string reversed;


    reversed = reverse_string( input);
    std::cout << "reversed sting:  " << reversed << std::endl;   


    return 0;
}