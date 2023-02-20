#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints all possible combinations of two digits
 * Return:0(success return statement)
*/
int main(void)
{
int leftdg;
int rightdg;
for (leftdg = '0'; leftdg <= '9' ; leftdg++)
{
for (rightdg = '0' ; rightdg <= '9' ; rightdg++)
if (((rightdg != leftdg) || (leftdg > rightdg)))
{
putchar(leftdg);
putchar(rightdg);
if (!(rightdg == '9' && leftdg == '8'))
{
putchar(',');
putchar(' ');
}
}

}
putchar('\n');
return (0);

}
