#include<iostream>

int *create_array(size_t size, int init_value = 0)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    // initialize the array
    for (size_t i {0}; i < size; ++i)
    {
        *(new_storage + i) = init_value; 
        //new_storage[i] = init_value;
    }
    return new_storage; 
}

void display(const int *const array, size_t size)
{
    for (size_t i{0}; i < size; ++i)
    {
        std::cout << *(array + 1) << " ";
    }
    std::cout <<"" <<std::endl; 

}

//-----------create double array-----------------------------

double *createDoubleArray(size_t array_size, double init_array)
{
    double *double_array{nullptr};
    double_array = new double[array_size];
    for (size_t i{0}; i < array_size; ++i)
    {
        *(double_array + 1) = init_array;
    }
    return double_array;      
       
}

void display(const double *const array, size_t size)
{
    for (size_t i{0}; i < size; ++i)
    {
        std::cout << *(array + 1) << " ";
    }
    std::cout <<"" <<std::endl; 

}

 // ----multiply_with_pointer-------------
void multiply_with_pointer(int* ptr, int multiplier)
{
    if(*ptr >= 1 && *ptr <= 100)
    {
        if (multiplier >=1 && multiplier <= 100)
        {
           *ptr *=multiplier;
        }        
        std::cout <<"result = "<< *ptr << std::endl;
    }
}

 // ----------------find Maximum Elements--------------------------------------
int findMaximumElement(int *collection, size_t size)
{
    int max = *collection;
    for (size_t i{0}; i < size; ++i)
    {
        if(*(collection + i) > max)
        {
            max = *(collection + i);
        }
    }
    return max;    

}


int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    std::cout << "\nHow many integers would you like to allocate? " << std::endl;
    std::cin >> size;

    std::cout << "\nWhat would you like to initialize to ? " << std::endl;
    std::cin >> init_value;
    
    // create array
    my_array = create_array(size, init_value);
    
    std::cout << " " << std::endl;
    display(my_array, size);
    
    // release the memory
    delete[] my_array;  

    //--------------------------------------------------
    double *double_array{nullptr};
    size_t array_size;
    double init_array{};


    std::cout << "\nHow many doubles would you like to allocate? " << std::endl;
    std::cin >> array_size;

    std::cout << "\nWhat would you like to initialize to " << std::endl;
    std::cin >> init_array;



    double_array = createDoubleArray(array_size, init_array);

    display(double_array, array_size);
    delete[] double_array;

    // -------------------multiply an value pointed by to by pointer -------------------------

    int *ptr{nullptr};
    int number;
    int multiplier;
    

    std::cout << "\nEnter an integer " << std::endl;
    std::cin >> number;
    ptr = &number;

    std::cout << "\nEnter a multiplier " << std::endl;
    std::cin >> multiplier;


    multiply_with_pointer(ptr, multiplier);

    
    // -------------Find the largest-------------------------------------------------------
    int collection[]{10, 95, 88, 45, 75};
    int collection_size{5};
    int max{};

    max = findMaximumElement(collection, collection_size);
    std::cout << max << std::endl;


    return 0;
}