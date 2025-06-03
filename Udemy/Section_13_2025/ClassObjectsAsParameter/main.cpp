#include <iostream>
#include "InventoryItem.h"
#include <string>

// prototypes
void storeValues(InventoryItem &item); // read user inputs
void printValues(const InventoryItem &item); // print part attributes 

int main()
{
    InventoryItem part; // part object
    storeValues(part);
    printValues(part);

    return 0;
}

// store part values based on user input
void storeValues(InventoryItem &item)
{
    int partNum;             // part number
    int onHand;              // Unit on hand
    double price;            // Uinit price
    std::string description; // Item description

    // Get the data from the user
    std::cout << "Enter data for the new part number" << std::endl;
    std::cout << "Part number: " << std::endl;
    std::cin >> partNum;
    std::cout << "Quantity on hand: " << std::endl;
    std::cin >> onHand;
    std::cout << "Unit price: " << std::endl;
    std::cin >> price;

    std::cin.get(); // Move past the '\n' left in the buffeer by the last input.
    std::cout << "Description: " << std::endl;
    std::getline(std::cin, description);

    // set values
    item.setInventoryItem(partNum, onHand, price, description);
}

void printValues(const InventoryItem &item) // Pass by-reference to save space and time, use const to avoid object member data modification accidentally
{
    std::cout << "PartNum     : " << item.getPartNum() << std::endl;
    std::cout << "OnHand      : " << item.getOnHand() << std::endl;
    std::cout << "Price       : " << item.getPrice() <<"€"<< std::endl;
    std::cout << "Description : " << item.getDescription() << std::endl;
}