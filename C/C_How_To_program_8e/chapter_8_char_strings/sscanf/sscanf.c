/* funcntion sscanf- reads formatted data from a character array and store
 *them in x and y 
 */

#include<stdio.h>

int main()
{
    char ch[] = "1234 36.983"; // initialize array
    int x; // value to be input
    double y; // value to be input

    // read from ch array
    sscanf(ch, "%d%lf", &x, &y);

    printf("%s\n%s%6d\n%s%8.3f", "The values stored in the array ch are: ", "integer: ",x ,"double: ",y);

    return 0;
}