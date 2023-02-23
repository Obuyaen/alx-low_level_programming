include "main.h"
/**
 *print_line-functions that draws a line in the terminal
 *@n:number of time _ should be printed
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int m;
for (m = 1; m <= n; m++)
{
{
_putchar('_');
}
_putchar('\n');
}
}
}
