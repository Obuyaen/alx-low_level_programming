#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints all possible combination of single digit numbers
 * Return:0(success return statement)
*/
int main(void)
{
int number;
for (number = 48 ; number < 58 ; number++)
{
putchar(number);
if (number != 57)
{
putchar(',');

}
putchar('\n');
return (0);
}
}
