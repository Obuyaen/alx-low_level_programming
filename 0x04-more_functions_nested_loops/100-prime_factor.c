#include <stdio.h>
#include <math.h>
/**
 *main-finds and prints the largest prime factor of the number 612852475143
 *followed by a new line
 *Return:0(success return statement)
*/
int main(void)
{
long int b;
long int max;
long int i;
b = 612852475143;
largest = -1;
while (b % 2 == 0)
{
largest = 2;
b /= 2;
}
for (i = 3; i <= sqrt(b); i = i + 2)
{
while (b % i == 0)
{
largest = i;
b = b / i;
}
}
if (n > 2)
{
largest = b;
printf("%ld\n", largest);
}
return (0);
}


