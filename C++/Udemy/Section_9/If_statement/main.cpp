// independent if statements
// Enter a number between 10 - 100
#include <iostream>

using namespace std;

int main()
{
    // variables
    int num{};

    // boundaries
    const int min{10};
    const int max{100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min)
    {
        cout << "\n============== if statment 1 ==============" << endl;
        cout << num << " is greater than or equal to " << min << endl;

        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max)
    {
        cout << "\n============== if statment 2 ==============" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    if (num >= min && num <= max)
    {
        cout << "\n============== if statment 3 ==============" << endl;
        cout << num << " is in range" << endl;
        cout << "This means statement 1 and 2 must also display!!" << endl;
    }

    if (num == min || num == max)
    {
        cout << "\n============== if statment 4 ==============" << endl;
        cout << num << " is righ on a boundary" << endl;
        cout << "This means all 4 statements display" << endl;
    }
    if (num > max)
    {
        cout << "\n============== if statment 5 ==============" << endl;
        cout << num << " is greater than " << max << endl;

        int diff{num - max};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    cout << endl;
    return 0;
}