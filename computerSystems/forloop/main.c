/* calculate compound interest using for loop
 100,000 invest
 0.05 interest
 10 years



*/
#include <stdio.h>

int main()
{
	//unsigned int i  = 1; // initialize control variable

	double p = 1000.0; // starting principle
    double a = 0;
    double rate = 0.5; // interest rate

    // Output tabel column heads
    printf("%s%21s\n", "Year", "Amount on deposite");

    // calculate amount on deposite for each of ten years
    for (unsigned int year = 1; year <= 10; year++)
	{
		a = p * pow(1.0 + rate, year);

		printf("%u%21.2f\n", year ,a);

	}


	return 0;
}
