#include<stdio.h>
#include "main.h"
/**
 *_atoi-converts string to integer
 *@s:string to be converted.
 *Return:integer converted to string.
*/
int _atoi(char *s)
{
int a, b, c, d, length, number;
a = 0;
b = 0;
c = 0;
d = 0;
length = 0;
number = 0;
while (s[length] != '\0')
{
length++;
}
while (a < length && d == 0)
{
if (s[a] == '-')
{
++b;
}
if (s[a] >= '0' && s[a] <= '9')
{
number = s[a] - '0';
if (b % 2)
{
number = -number;
}
c = c * 10 + number;
d = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
{
break;
}
d = 0;
}
a++;
}
if (d == 0)
{
return (0);
}
return (c);
}
/**
 *main-multiplies two integers.
 *@argc:counts the arguments passed
 *@argv:array of arguments.
 *Return:0(success return statement)
*/
int main(int argc, char *argv[])
{
int result, digit1, digit2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
digit1 = _atoi(argv[1]);
digit2 = _atoi(argv[2]);
result = digit1 *digit2;
printf("%d\n", result);
return (0);
}
