// Function Definition
// Area of a circle anf volume of a Cylinder

#include <iostream>


const double pi {3.14159};
double calculate_area_circle(double radius)
{
    return pi * radius * radius;

}
double caclulate_cylinder_volume(double radius, double height)
{
    //return pi * radius*radius*height;
    return calculate_area_circle(radius) * height;

}

void area_circle()
{
    double radius{};
    std::cout << "Enter the radius of the circle" << std::endl;
    std::cin >> radius;

    std::cout << "The area of a circle withe radius " << radius << " is "<< calculate_area_circle(radius) << std::endl;

}
void volume_cylinder()
{
    double radius{};
    double height{};

    std::cout << "Enter the radius of the cylinder " << std::endl;
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder " << std::endl;
    std::cin >> height;

    std::cout << "The volume of the cylinder with radius " << radius << " and height" << height <<" is "<< caclulate_cylinder_volume(radius, height) << std::endl;
    



}

int main()
{
    area_circle();
    area_circle();
    volume_cylinder();
    
    return 0;
}