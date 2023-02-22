#include<stdio.h>
/**
 *main-finds and prints sum of even valued terms in a fibonacci
 *Return:0(success return statement)
*/
int main(void)
{
int m = 0, n = 1, fwd = 0;
int sum = 0;
while (fwd < 4000000)
{
fwd = m + n;
m = n;
n = fwd;
if (fwd % 2 == 0)
{
sum += fwd;
}
}
printf("%i \n ", fwd);
return (0);
}
