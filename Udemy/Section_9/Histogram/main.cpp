// Display data items

#include <iostream>
#include <vector>

int main()
{
    int number_Of_items{};
    std::cout << "How many data items do you have? " << std::endl;
    std::cin >> number_Of_items;

    std::vector <int> data{}; // store daynamic data
    
    //get data using loop
    for (int i {1}; i <= number_Of_items; i++)
    {
       int data_items{};
       std::cout << "Enter data items " <<  i <<": ";
       std::cin >> data_items;

       // insert into the vector
       data.push_back(data_items);

    }
    std::cout << "\nDisplaying Histogram " << std::endl;
    for (auto val:data)
    {
        for (int i{1}; i <= val; i++)
        {
            if(i%5 == 0)
            std::cout << "|";
            else
            std::cout << "*";
        }
        std::cout << std::endl;
        
    }
    
    



    return 0;
}