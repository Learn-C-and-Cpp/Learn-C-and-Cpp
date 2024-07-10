// Explixit type casting-static_cast<type>
/*
    Ask the user 3 integers
    calculate the sum of the integers
    calculate the avarage of 3 integers

*/

#include <iostream>
using namespace std;

int main()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Enter 3 integeres separated by space ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double avarage{0.0};
    avarage = static_cast<double>(total) / count;

    cout << "The 3 numbers were:" << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is:" << total << endl;
    cout << "The avarage of the numbers is:" << avarage << endl;

    return 0;
}
