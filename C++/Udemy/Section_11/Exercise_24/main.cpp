// Overloading Functions - Calculating Area
#include <iostream>
#include <cmath>

// square();
// rectangle();

int find_area(int side_length);
double find_area(double side_length, double width);
void area_calc();

int main()
{
    area_calc();

    return 0;
}

int find_area(int side_length)
{
    return pow(side_length, 2);
}
double find_area(double side_length, double side_width)
{
    return side_length * side_width;
}
void area_calc()
{
    int square_area = find_area(2);
    double rectangle_area = find_area(4.5, 2.3);

    std::cout << "The area of the square is " 
    << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}
    

