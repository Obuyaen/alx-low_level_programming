#include<stdio.h>
/**
 *main-prints the first 50 fibonacci characters
 *Return:0(success return statement)
*/
int main(void)
{
int m = 0;
long int n = 0, p = 1, fwd;
while (m < 50)
{
fwd = n + p;
n = p;
p = fwd;
printf("%lu", fwd);
if (m < 49)
{
printf(",");
}
m++;
}
putchar('\n');
return (0);
}
