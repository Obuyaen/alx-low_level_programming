#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main- determines whether a number is positive,zero or negative
 * Return:0 (A success return statement)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf(" %d is  positive number \n ", n);
}
if (n == 0) 
{
printf(" %d is  zero \n ", n);
}
if (n < 0)
{
printf(" %d is  negative number \n ", n);
}
return (0);
}
