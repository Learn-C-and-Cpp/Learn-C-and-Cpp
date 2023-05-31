// Implementing a Recursive Function - Save a Penny
// money = penny * days

#include <iostream>
#include <iomanip>

int faunction_activation_count{0};

double a_penny_doubled_everyday(int days, double peny = 0.01);
void amount_accumulated();
int test_faunction_activation_count();

int main()
{
    amount_accumulated();
    std::cout << std::endl;
    std::cout <<"Faunction_activation_count : "<< test_faunction_activation_count() <<std::endl;

    return 0;
}

// double a_penny_doubled_everyday(double peny, int days)
// {
//      if (days == 1)
//     {
//         return peny;
//     }

//     for (int i{0}; i < days-1; ++i)
//     {
//          peny *= 2;
//     }
//     return peny;
// }

double a_penny_doubled_everyday(int days, double peny) // 
{
    faunction_activation_count++;

    if (days <= 1)
    {
        return peny;
    }

    return a_penny_doubled_everyday(--days, peny * 2);
}

void amount_accumulated() // done
{
    double total_amount = a_penny_doubled_everyday(25);
    std::cout << "If I start with a penny and doubled it every day for 25 days, I will have $" 
    << std::setprecision(10) << total_amount;
}

int test_faunction_activation_count()
{
    return faunction_activation_count;
}