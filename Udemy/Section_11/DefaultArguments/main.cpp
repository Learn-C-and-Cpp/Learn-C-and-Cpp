// Default Arguments

#include <iostream>
#include <iomanip>
#include <string>

double calculate_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);
void greeting(std::string name, std::string prefix = "Mr.", std::string suffix = "");


double calculate_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(std::string name, std::string prefix, std::string suffix )
{
    std::cout << "Hello " << prefix + " " + name + " " + suffix <<std::endl;

}

int main()
{
    double cost{0};
    cost = calculate_cost(100.0, 0.08, 4.25);

    std::cout << std::fixed<< std::setprecision(2) << std::endl;
    std::cout << "Cost is:" << cost << std::endl;

    
    cost = calculate_cost(100.0, 0.08);
    std::cout << "Cost is:" << cost << std::endl;
    
    cost = calculate_cost(200.0);
    std::cout << "Cost is:" << cost << std::endl;
    
    cost = calculate_cost();
    std::cout << "Cost is:" << cost << std::endl;

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rodgers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");
    


    return 0;
}