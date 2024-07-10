#include <iostream>



int main()
{
    char choice = 'y';

    while(choice == 'y')
    {

        int a{ };

        std::cout << "Enter an mumber to check if odd or even\n";
        std::cin >> a;

        if(a%2 == 0)
        {
            std::cout << " your number is even\n";

        }
        else
        {
            std::cout << "Your number is odd\n";
        }

        std::cout << " Want to check more y for yes n for no\n";
        std::cin >> choice;

    }

    // The C code

//    while(choice == 'y')
//    {
//
//        int a;
//
//        printf("Enter an mumber to check if odd or even\n");
//        scanf("%d", &a);
//
//        if(a%2 == 0)
//        {
//            printf("your number is even\n");
//
//        }
//        else
//        {
//            printf("Your number is odd\n");
//        }
//
//        printf("Want to check more y for yes n for no\n");
//        scanf(" %c ", &choice);
//
//    }
    return 0;
}



