
/* Logical operators in c  ( &&, ||, ! )
 * && compine two conditions return True if all conditions are Ture else fale
 * || compine two conditions return True if more than one condition is True else false when
   all canditions are False
 * != used to complement a condition, returns True if the condition is False  and False for True
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    if(a == 5 && a != 6 && a <=56 && a > 4)
    {
     printf("welcome to && operators\n");
    }

    //---------------------------------------
    if(a != 5 || a == 6 || a >= 56 || a > 4)
    {
     printf("welcome to || operators\n");
    }
    //--------------------------------------

    if(!(a != 6) )
    {
     printf("welcome to ! operators\n");
    }

    //---------------------
    int x =5, y = 3;
    int incr;
    incr = (x > y) && (y++); // false && 4
    printf("incr = %d\n",incr);
    printf("b = %d", y); // = 3

    //-------------------------------






    return 0;
}
