#include <iostream>


int breakOrReturn()

{
    int sum{0};

    for(int count{0};count < 10; ++count)
    {
        std::cout << "Enter a mumber to add or 0 to quit and 'r' to return " <<'\n';
        int num{0 };
        std::cin >> num;

        if(num == 0)
          break;

          sum += num;

    }
    std::cout << "sum = "<< sum  <<'\n';



    return 0;
}

void getCharacter()
{
    int counter{ 0 };
    bool keepLooping{ true };

    while( keepLooping )
    {
        std::cout << "Enter 'e' to quit  " <<std::endl;
        char ch{ };
        std::cin >>ch;

        if(ch == 'e')
            keepLooping = false;
        else
        {
            ++counter;
            std::cout << " itarations " << counter <<" times\n";
        }

    }
}

void untillUserKill()
{
    int counter{ 0 };
    while(true)
    {
        std::cout << "Enter 'e' to quit or any character to continue  " <<std::endl;
        char ch{ };
        std::cin >>ch;

        if(ch == 'e')
            break;
        ++counter;

        std::cout << " itarations " << counter <<" times\n";

    }

}

int main()
{
    std::cout << breakOrReturn() <<'\n';

   getCharacter();
   untillUserKill();

    return 0;
}
