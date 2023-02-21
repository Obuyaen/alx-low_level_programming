#include "main.h"
/**
 *print_last_digit-prints the last digit of a number
 *@number:number whose last digit is to be printed
 *Return:The last digit
*/
int print_last_digit(int number)
{
int digit = number % 10;
if (digit < 0)
{
digit *= +1;
_putchar(digit + '0');
}

return (0);
}
