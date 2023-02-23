#include "main.h"
#include<stdio.h>
/**
 *main- prints the numbers from 1 to 100 for multiples of 3
 *it prints fizz and for multiples of 5 it prints Buzz
 *instead of printing the number but for multiples of both
 *5 an 3 it prints FizzBuzz
 *Return:0(success return statement)
*/
int main(void)
{
int m;
for (m = 1; m <= 100; m++)
{
if (m % 3 == 0 && m % 5 != 0)
{
printf(" Fizz ");
}
else if (m % 5 == 0 && m % 3 != 0)
{
printf(" Buzz ");
}
else if (m % 5 == 0 && m % 3 == 0)
{
printf(" FizzBuzz ");
}
else if (m == 1)
{
printf("%d", m);
}
else
{
printf(" %d", m);
}

}
printf("\n");

return (0);
}


