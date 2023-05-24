#include <iostream>
using namespace std;

int main()
{
    // define conversion values in cents
    const int dollar_value{100};
    const int quater_value{25};
    const int dime_value{10};
    const int nicle_value{5};

    int chage_amount{};

    cout << "Enter and amaount in cents" << endl;
    cin >> chage_amount;

    int balancle{}, dollars{}, quaters{}, dimes{}, nickels{}, pennies{};

    dollars = chage_amount / dollar_value;
    balancle = chage_amount - (dollars * dollar_value);

    quaters = balancle / quater_value;
    balancle -= (quaters * quater_value);

    cout << "Dollars: " << dollars << endl;
    cout << "Quater: " << quaters << endl;

    cout << "Balance: " << balancle << endl;

    return 0;
}