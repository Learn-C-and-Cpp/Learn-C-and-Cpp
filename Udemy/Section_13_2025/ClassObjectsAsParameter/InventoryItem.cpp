#include "InventoryItem.h"
#include <iostream>

InventoryItem::InventoryItem()
    : partNum{0}, onHand{0}, price{0.0}, description{""}
{
    std::cout << "Inventory Item no-args constructor " << std::endl;
}
InventoryItem::InventoryItem(int partNumber_val, int onHand_val, double price_val, std::string description_val)
    : partNum{partNumber_val}, onHand{onHand_val}, price{price_val}, description{description_val}
{
    std::cout << "Inventory Item 4-args constructor " << std::endl;
}
InventoryItem::~InventoryItem()
{
    std::cout << "Inventory Item destructor " << std::endl;
}
// Getters
int InventoryItem::getPartNum() const {return partNum;}
int InventoryItem::getOnHand() const {return onHand;}
double InventoryItem::getPrice() const { return price;}
std::string InventoryItem::getDescription() const { return description; }
// Setters
void InventoryItem::setInventoryItem(int partNumber_val, int onHand_val, double price_val, std::string description_val)
{
    partNum = partNumber_val;
    onHand = onHand_val;
    price = price_val;
    description = description_val;
}
