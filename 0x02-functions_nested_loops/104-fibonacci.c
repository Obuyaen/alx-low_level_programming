#include<stdio.h>
/**
 *main-finds and prints the first 98 fibonacci numbers
 *Return:0(success return statement)
*/
int main(void)
{
unsigned long int a;
unsigned long int lf = 1;
unsigned long int rght = 2;
unsigned long int t;
unsigned long int lf1;
unsigned long int lf2;
unsigned long int rght1;
unsigned long int rght2;
printf("%lu", lf);
for (a = 1; a < 9 ; a++)
{
printf(", %lu", rght);
rght += lf;
lf = rght - lf;
}
lf1 = (lf / t);
lf2 = (lf % t);
rght1 = (rght / t);
rght2 = (rght % t);
for (a = 92 ; a < 99 ; a++)
{
printf(", %lu", rght1 + (rght2 / t));
printf("%lu", rght2 % t);
rght1 = rght1 + lf1;
lf1 = rght1 - lf1;
rght2 = rght2 + lf2;
lf2 = rght2 - lf2;
}
printf("\n");
return (0);

}
