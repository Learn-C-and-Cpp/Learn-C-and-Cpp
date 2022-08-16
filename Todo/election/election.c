// study pthred and openMP 
//https://www.quora.com/How-can-we-run-two-statements-at-a-time-in-C-programming
#include <stdio.h>

int tally (int ruto, int Odinga, int counties);
int main()
{
    const int counties = 47;
    printf("Input Ruto\n");
    int ruto;
    scanf("%d", &ruto);
    printf("Input Odinga\n");
    int Odinga;
    scanf("%d", &Odinga);

    tally (ruto, Odinga, counties);

    return 0;
}
// count and keep reacord
int tally (int ruto, int Odinga, int counties)
{

    for (size_t i = 0; i < counties; i++)
    {
          
    }
    
    

}
