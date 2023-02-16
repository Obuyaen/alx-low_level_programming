#include<stdio.h>
/**
 * main - This program prints the size of various data types
 * Return:O (Success)
*/

int main(void)
{

char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)", sizeof(a));

printf("Size of an int: %lu byte(s)", sizeof(b));

printf("Size of a long int: %lu byte(s)", sizeof(c));

printf("Size of a long long int: %lu  byte(s)", sizeof(d));

printf("Size of a float: %lu byte(s)", sizeof(f));

return (0);
}


