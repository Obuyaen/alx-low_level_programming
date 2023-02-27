#include "main.h"
/**
 *print_rev-prints a string in reverse followed by a new line
 *@s:string to be printed
 *return:0(success return statement)
*/
void print_rev(char *s)
{
int longinteger = 0;
int m;
while (*s != '\0')
{
longinteger++;
s++;
}
s--;
for (m = longinteger ; m > 0; m--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}



