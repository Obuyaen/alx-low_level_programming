#include "main.h"
/**
 *times_table-prints th 9 times table starting with 0
 *Return:void
*/
void times_table(void)
{
int number, multy, prod;
for (number = 0; number <= 9; number++)
{
_putchar('0');
for (multy = 1; multy <= 9; multy++)
{
_putchar(',');
_putchar(' ');
prod = number * multy;
if (prod <= 9)
{
_putchar(' ');
}
else
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}


}
