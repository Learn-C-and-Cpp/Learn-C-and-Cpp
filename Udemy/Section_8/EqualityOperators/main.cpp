#include <iostream>
using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{true};

    cout << boolalpha; // display true/false
                       /*
                     int num1{}, num2{};
                   
                   
                         cout << "Enter 2 integeres separated by space ";
                         cin >> num1 >> num2;
                   
                         equal_result = (num1 == num2);
                         not_equal_result = (num1 != num2);
                   
                         cout << "Comparison result(equal):" << equal_result <<endl;
                         cout << "Comparison result(not equal):" << not_equal_result <<endl;
                      */

    /* char char1{}, char2{};

cout << "Enter 2 characters separated by space ";
cin >> char1 >> char2;

equal_result = (char1 == char2);
not_equal_result = (char1 != char2);

cout << "Comparison result(equal):" << equal_result << endl;
cout << "Comparison result(not equal):" << not_equal_result << endl;
*/
    /*
      double double1{}, double2{};

     cout << "Enter 2 characters separated by space ";
      cin >> double1 >> double2;

      equal_result = (double1 == double2);
      not_equal_result = (double1 != double2);
   */

    int value1{};
    double double_value1{};

    cout << "Enter and integer and a duouble separated by space ";
    cin >> value1 >> double_value1;

    equal_result = (value1 == double_value1);
    not_equal_result = (value1 != double_value1);
    cout << "Comparison result(equal):" << equal_result << endl;
    cout << "Comparison result(not equal):" << not_equal_result << endl;

    return 0;
}
