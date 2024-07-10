#include <iostream>

// #include<bits/stdc++.h>

class TestClass
{
private:
    int count;

public:
    TestClass() : count{5} {}

    void operator++() //  what is the paramete
    {
        count++;
    }
    void display()
    {
        std::cout << " Count: " << count << std::endl;
    }
};
//-----------------------------------circle-------------------------------------------
class Circle
{
protected:
    double radius3;

private:
    double radius2;

public:
    double radius;

    Circle() : radius{0.0}, radius2{0.0}, radius3{0.0} {}

    void set_Radius(double r)
    {
        radius2 = r;
    }

    double compute_area()
    {
        return 3.14 * radius2 * radius2;
    }
};

// ---------------sub class squre .......................................
class Square : public Circle
{
public:
    Square() {}

    void setRadius(double r_value)
    {
        radius3 = r_value;
    }
    double compute_square()
    {
        return radius3 * radius3;
    }

    void display()
    {
        std::cout << "square radius3  " << radius3 << std::endl;
    }
};

int main()
{
    std::cout << " ----------- TestClass----------------- " << std::endl;
    TestClass ts;
    ++ts;
    ts.display();



    std::cout <<" ----------- Circle public --------------- "<<std::endl;
    Circle ca;
    ca.radius = 5.5;
    double area = ca.compute_area();
    std::cout <<" Radius = "<< ca.radius <<std::endl;
    std::cout <<" Area = "<< area <<std::endl;

    std::cout << " ----------- Circle private --------------- " << std::endl;

    Circle cb;
    cb.set_Radius(7);
    std::cout << "private " << cb.compute_area() << std::endl;

    std::cout << " ----------- square --------------- " << std::endl;

    Square s;
    s.set_Radius(7);
    s.display();
}
