#include "main.h"
/**
 *print_array-prints n elements of an array
 *@a:name of the array
 *@n:number of elements of the array to be printed
 *Return:a , n
*/
void print_array(int *a, int n)
{
int m;
for (m = 0; m < (n - 1); m++)
{

printf("%d, ", a[m]);
}
if (m == (n - 1))
{

printf("%d", a[n - 1]);
}

printf("\n");

}


