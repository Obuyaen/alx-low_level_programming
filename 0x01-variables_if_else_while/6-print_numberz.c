#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints all single digit numbers base 10 using putchar
 * Return:0(success return statement)
*/
int main(void)
{
int digit;
for (digit = 0 ; digit <= 9 ; digit++)
{
putchar((digit % 10) + '0');

putchar('\n');

}

return (0);

}
