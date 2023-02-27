#include "main.h"
/**
 *puts2-prints every other character of a string
 *@str:input string
 *Return:printed characters
*/
void puts2(char *str)
{
int longinteger = 0;
int m = 0;
char *p = str;
int n;
while (*p != '\0')
{
p++;
longinteger++;
}
m = longinteger - 1;
for (n = 0 ; n <= m ; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');

}


