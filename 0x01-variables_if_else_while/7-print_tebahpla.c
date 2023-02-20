#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints lower case alphabet in reverse
 * Return:0(success return statement)
*/
int main(void)
{
char ch;
for (ch = 'z' ; ch <= 'a' ; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
