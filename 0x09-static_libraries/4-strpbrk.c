#include "main.h"
/**
 *_strpbrk-Entry point
 *@s:input
 *@accept:input
 *Return:0(success return statement)
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
return (s);
}
}
s++;
}
return ('\0');
}
