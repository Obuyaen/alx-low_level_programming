#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints all numbers base 16 in lower case
 * Return:0(success return statement)
*/
int main(void)
{
int number;
char ch;
for (number = 0; number <= 9 ; number++)
{
putchar((number % 10) + '0')
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
