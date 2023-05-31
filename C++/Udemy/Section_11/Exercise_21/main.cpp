// Poing of sale application
#include <iostream>
#include <cmath>

int main()
{
    double bill_total{102.78};
    int number_of_guests{5};

    double individual_bill_1{}; // always rounds down to the nearest dollar. -floor()-> 20.56 -20.00
    double individual_bill_2{}; // always rounds to the nearest dollar. -round() -> 20.56 = 21
    double individual_bill_3{}; // always rounds up to the nearest cent. - ceil() (20.56*100)/100 -> (2050) = 20.56

    double individual_bill = bill_total / number_of_guests;
    individual_bill_1 = floor(individual_bill );
    individual_bill_2 = round(individual_bill);
    individual_bill_3 = ceil(individual_bill * 100)/100;


    std::cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n"
              << "The individual bill at location 2 will be $" << individual_bill_2 << "\n"
              << "The individual bill at location 3 will be $" << individual_bill_3 << std::endl;

    return 0;
}
