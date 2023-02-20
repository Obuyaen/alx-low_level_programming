#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main-Assigns a random number to a variable n
 * Return:0(success return statement)
*/

int main(void)
{
int n;
int num;
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num  > 5)
{
printf("Last digit of %d is %d  and is greater than 5 \n", num, n);
}

if (num == 0)
{
printf("Last digit of %d is %d  and is 0  \n", num, n);
}
if (num < 6 && num != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0  \n", num, n);
}

return (0);
}
