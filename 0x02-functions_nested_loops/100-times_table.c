#include "main.h"
/**
 *times_table-prints n times table starting with 0
 *@n-the times table to be printed
*/
void print_times_table(int n)
{
int i = 0, j, k;
if (n < 0 || n > 15)
{                                                               return;
}                                                               while (i <= n)
{
for (j = 0 ; j <= n ; j++)
{
k = i * j;                                                      if (j == 0)
{                                                               _putchar(k + '0')
}
else if (k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(k + '0');                                              }
else if (k < 100)
{
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
else
{
_putchar(k / 10 + '0');
_putchar((k - 100) / 10 + '0');
_putchar(k % 10 + '0');
}
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
i++;
}
}
