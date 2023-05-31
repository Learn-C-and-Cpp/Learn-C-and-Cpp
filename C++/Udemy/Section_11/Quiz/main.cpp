#include <iostream>

void func(int &x, int &y, int &z)
{
    x = y + z;
    y = 10;
    z = 20;

}
int main()
{
    int a = 10, b = 20, c = 30;
    func(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}