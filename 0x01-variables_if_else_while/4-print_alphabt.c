#include<stdio.h>
#include<stdlib.h>
/**
 * main-prints alphabets in lowercase except for e and q
 *Return:0(Success return statement)
*/
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && != 'q')
{
putchar(ch);
}

}
putchar('\n');
return (0);

}
