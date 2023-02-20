#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints alphabet in lowercase and then uppercase
 * Return:0(Success return statement)
*/
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}

for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}
