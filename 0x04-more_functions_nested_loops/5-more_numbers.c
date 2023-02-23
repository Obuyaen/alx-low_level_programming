#include "main.h"
/**
 *more_numbers-prints 10 times the numbers from.0 to 14
 *@x-The integers to be printed
 *@y-the number of times the numbers are to be printed
*/
void more_numbers(void)
{
for (x = 0 ; x < 10 ; x++)
{
for (y = 0 ; y < 15 ; y++)
{
if (y >= 10)
{
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
}
}

}
_putchar('\n');
}
