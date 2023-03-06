#include "main.h"
/**
 *_strchr-Entry point
 *@s:input
 *@c:input
 *Return:0(Success return value)
*/
char *_strchr(char *s, char c)
{
int a = 0;
for (; s[a] >= '\0'; i++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}



