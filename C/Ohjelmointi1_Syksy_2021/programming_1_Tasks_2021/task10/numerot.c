/* c program to print data in a table using
 * repeate structure
 */
#include <stdio.h>

int main(void)
{

  //initilize the multiplier(N) values
  int n0 = 1, n2 = 10, n3 = 100, n4 = 1000;

  // print table column heads
  printf("\n%-7s%-7s%-7s%-7s", "N", "10*N ", "100*N", "1000*N");
  puts("");

  for (int row = 1; row <= 10; ++row)
  {

    for (int column = 1; column <= 4; ++column)
    {

      switch (column)
      {
      case 1:
        //print the product of row * N1
        printf("%d\t", row * n0);
        break;
      case 2:
        //print the product of row * N2
        printf("%d\t", row * n2);
        break;
      case 3:
        //print the product of row * N3
        printf("%d\t", row * n3);
        break;
      case 4:
        //print the product of row * N4
        printf("%d\t", row * n4);
        break;
      default:
        break;
      }
    }
    printf("\n"); // print new line
  }

  return 0;
}