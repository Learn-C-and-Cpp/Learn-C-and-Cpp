#include <stdio.h>
int recusive_division(int numerator, int denominator);
int recusive_remainder(int numerator, int denominator);
int main(void)
{
    int x;
    printf("Enter a numerator\n");
    scanf("%d", &x);

    int y;
    printf("Enter a denominator\n");
    scanf("%d", &y);

    int remainder = recusive_remainder(x, y); 
    int answer = recusive_division(x, y);
    
    printf("%d / %d = %d rem of %d", x, y, answer, remainder);


    return 0;
}
int recusive_division(int numerator, int denominator)
{
    int count = 0;

    // Base case
    if (numerator < denominator)
    {
        return count;
    }
    count++;

    // recursive case
    return recusive_division(numerator - denominator, denominator) + count;
    
}
int recusive_remainder(int numerator, int denominator)
{
    // Base case
    if (numerator < denominator)
    {
        return numerator;
    }
    
    // recursive case
    return recusive_division(numerator - denominator, denominator);

}