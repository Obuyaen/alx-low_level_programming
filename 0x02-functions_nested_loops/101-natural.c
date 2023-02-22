#include<stdio.h>
#include<stdlib.h>
/**
 * main-computes and prints multiples of 3 or 5 below 1024
 * Return:0(success return statement
*/
int main(void)
{
int num = 0;
int sum = 0;
while (num < 1024)
{
if (num % 3 == 0 || num % 5 == 0)
{
sum += 0;
}
num++;
}
printf("%d \n ", sum);
return (0);

}
