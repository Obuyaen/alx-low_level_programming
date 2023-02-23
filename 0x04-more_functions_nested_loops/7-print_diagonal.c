#include "main.h"
/**
 *print_diagonal-draws a diagonal on the terminal
 *@n:number of times the character should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int k, l;
for (k = 0; k < n; k++)
{
for (l = 0; l < n; l++)
{
if (l == k)
{
_putchar('\');
}
else if (l < k)
{
_putchar(' ');
}
_putchar('\n');
}
}
}
}

