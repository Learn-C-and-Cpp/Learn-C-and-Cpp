#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>

class InventoryItem
{
    // Attributes/data members
private:
    int partNum;             // part number
    int onHand;              // Unit on hand
    double price;            // Uinit price
    std::string description; // Item description
    // Methods
public:
    // Costructors
    InventoryItem();
    InventoryItem(int partNumber_val, int onHand_val, double price_val, std::string description_val);
    // Destructor
    ~InventoryItem();
    // Getters
    int getPartNum() const;
    int getOnHand() const;
    double getPrice() const;
    std::string getDescription() const;
    // Setters
    void setInventoryItem(int partNumber_val, int onHand_val, double price_val, std::string description_val);
};
#endif // INVENTORYITEM_H