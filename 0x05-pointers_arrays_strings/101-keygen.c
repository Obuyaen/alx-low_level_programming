#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main-generates a random valid password for the program
 *101 -crackme
 *Return:0(success return statement)
*/
int main(void)
{
int passwd[100];
int p, sum, k;
sum = 0;
srand(time(NULL));
for (p = 0 ; p < 100 ; p++)
{
passwd[p] = rand() % 78;
sum += (passwd[p] + '0');
putchar(passwd[p] + '0');
if ((2772 - sum) -'0' < 78)
{
k = 2772 - sum - '0';
sum += k;
putchar(k + '0');
break;
}
}
return (0);
}




