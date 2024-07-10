/*
Shipping calculator
-Ask for package dimensions
-Dimensions must be 10 inches
-Base cost 2.50€
-if valume is greater than 100 cubic inches there is a 10% surcharge
-if valume is greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>
#include <iomanip> // input output manipulators

int main()
{
    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_threshold{100}; // volume
    const int tier2_threshold{500}; // volume

    int max_dimensions_length{10}; // Dimensions must be 10 inches

    double tier1_surcharge{0.10}; // 10% extra
    double tier2_surcharge{0.25}; // 25% extra

    int package_volume{};

    std::cout << "Welcom to the package calculator" << std::endl;
    std::cout << "Enter the length, width and height of the package separated by space" << std::endl;
    std::cin >> length >> width >> height;

    // logic - package calculation
    if (length > max_dimensions_length || width > max_dimensions_length || height > max_dimensions_length)
    {
        std::cout << "Package rejected - dimension exeeded " << std::endl;
    }
    else
    {
        double package_cost{};
        package_volume = length * width * height;
        package_cost = base_cost;

        if (package_volume > tier2_threshold)
        {
            package_cost += package_cost * tier2_surcharge;
            std::cout << "adding tier 2 surcharge" << std::endl;
        }
        else if (package_volume > tier1_threshold)
        {
            package_cost += package_cost * tier1_surcharge;
            std::cout << "adding tier 1 surcharge" << std::endl;
        }
        
        std::cout << "The volume of your package is: " << package_volume << std::endl;
        std::cout << "Your package will cost " << package_cost << "€ to ship " << std::endl;
    }

    return 0;
}