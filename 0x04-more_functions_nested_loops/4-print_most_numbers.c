#include "main.h"
/**
 *print_most_numbers-prints numbers from 0 to 9 but not 2 and 4
 *@num-integers to be printed
 *Return:void
*/
void print_most_numbers(void)
{
int num;
for (num = 48 ; num <= 57 ; num++)
{
if (num != 50)
{
if (num != 52)
{
_putchar(num);
}
}
}
_putchar('\n');
}
