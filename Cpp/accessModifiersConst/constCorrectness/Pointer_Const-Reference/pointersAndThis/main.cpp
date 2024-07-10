/**This Pointers to retrive the object's x hidden by the local variable 'x'.
 * used when local variable's name is same as class member's name
 * https://www.geeksforgeeks.org/this-pointer-in-c/
 */

#include <iostream>

class TestThis
{
  private:
    int x; // x
    int y;

  public:
    TestThis(int x, int y)
    {
        this->x = x;
        this->y = y;
        std::cout << "Constructor " <<std::endl;
    }
    // void setX(int x) // local is same as member's name
    // {
    //     this->x = x;
    // }
    TestThis &setX(int a)
    {
        x = a;
        return *this;
    }
    TestThis &setY(int b)
    {
        y = b;
        return *this;
    }

    void print()
    {
        std::cout << "x = " << x << " y= " << y << std::endl;
    }
};

int main()
{
    TestThis obj(5, 5);
    obj.setX(10).setY(20);

    TestThis kthis(1,0);
    


    obj.print();
}
