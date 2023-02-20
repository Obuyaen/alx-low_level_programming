#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints all possible combinations of three digits
 * Return:0(success return statement)
*/
int main(void)
{
int leftdg;
int middledg;
int rightdg;
for (leftdg = '0' ; leftdg <= '9' ; leftdg++)
{
for (middledg = '0' ; middledg <= '9' ; middledg++)
{
for (rightdg = '0' ; rightdg <= '9' ; rightdg++)
{
if (!(rightdg == middledg) || (middledg == leftdg) || (middledg > rightdg) || (leftdg > middledg))
{
putchar(leftdg);
putchar(middledg);
putchar(rightdg);
if (!(rightdg == '9') && (leftdg == '7') && (middledg == '8'))
{
putchar(',');
putchar(' ');

}

}
}
}

}
putchar('\n');
return (0);
}
