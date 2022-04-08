// sprint pre-format a string before printing

#include <stdio.h>
#include <stdlib.h>

#define LCD_MAX_WIDTH 16

void lcd_printf();

int main()
{
    float pi = 3.14159;
    char lcd_str[LCD_MAX_WIDTH];

    char message[80];
    double acc_x = 0.665;
    double acc_y = 0.342;
    double acc_z = 0.734;


    sprintf(message,"%.3f, %.3f, %.3f\n" , acc_x, acc_y, acc_z);

    puts(message);

    sprintf(lcd_str, "%f\n", pi);
    puts(lcd_str);

    return 0;
}
