#include "main.h"
/**
 *_atoi-converts a string to an integer
 *@s:string to be converted
 *Return:integer converted from string
*/
int _atoi(char *s)
{
int a, b, n, len, k, digy;
a = 0;
b = 0;
n = 0;
length = 0;
k = 0;
digy = 0;
while (s[length] != '\0')
{
length++;
}
while (a < length && k == 0)
{
if (s[a] == '-')
{
++b;
}
if (s[a] >= '0' && s[a] <= '9')
{
digy = s[a] - '0';
if (b % 2)
{
digy = -digy;
}
n = n * 10 + digy;
k = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
{
break;
}
k = 0;
}
a++;
}
if (k == 0)
{
return (0);
}
return (n);
}


