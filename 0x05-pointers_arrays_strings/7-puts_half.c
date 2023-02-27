#include "main.h"
/**
 *puts_half-prints half of a string
 *if odd len, n = (length_of_the_string - 1) / 2
 *@str:string input
 *Return:half of the string input
*/
void puts_half(char *str)
{
int b, c, longinteger;
longinteger = 0;
for (b = 0; str[b] != '\0'; b++)
{
longinteger++;
c = (longinteger / 2);
if ((longinteger % 2) == 1)
{
c = ((longinteger + 1) / 2);
}
for (b = c; str[b] != '\0'; b++)
{
putchar(str[b]);
}
_putchar('\n');

}
}



