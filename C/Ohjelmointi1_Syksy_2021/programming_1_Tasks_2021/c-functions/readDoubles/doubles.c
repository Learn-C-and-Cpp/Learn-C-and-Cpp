#include <stdio.h>
double getDouble();

int main()
{
    double amount = getDouble();
    printf("amount is %lf", amount);
    return 0;
}
double getDouble()
{
    double amount = 0;
    printf("%s", "Enter amount");
    scanf("%lf", &amount);

    return amount;
}