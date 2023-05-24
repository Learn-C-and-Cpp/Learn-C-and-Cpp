#include <stdio.h>
#include <stdlib.h>

//forward declaration of add() function

void makeSellection( int sellection);
double getDeposite( double amount);

int main()
{
    int sellection = 0;

    while(sellection != 1 && sellection != 2 && sellection != 3 && sellection != 4 )
    {


        printf("%s","Please make a sellection: \n");
        printf("%s","1.addition: \n");
        printf("%s","2.subtraction: \n");
        printf("%s","3.multiblication: \n");
        printf("%s","4.division: \n");

        scanf("%d", &sellection);

    }
    // do something here

     printf("in while Your sellection is: %d\n", sellection);


    // do -while
    do
    {
        printf("%s","Please make a sellection: \n");
        printf("%s","1.addition: \n");
        printf("%s","2.subtraction: \n");
        printf("%s","3.multiblication: \n");
        printf("%s","4.division: \n");

        scanf("%d", &sellection);

    }
    while(sellection != 1 && sellection != 2 && sellection != 3 && sellection != 4 );

    // do something

    printf("in do-while Your sellection is: %d\n", sellection);


//    double cash;
//    printf("%s", "make sellection");
//    scanf("%d",&sellection);
//
//    makeSellection(sellection);
    return 0;
}

//void makeSellection( int sellection)
//{
//    switch(sellection)
//    {
//    case 1: cash getDeposite(double mount);
//            break;
//    }
//
//}
//
//double getDeposite(double amount)
//{
//    double amount = 2.993;
//
//    return  amount;
//}
