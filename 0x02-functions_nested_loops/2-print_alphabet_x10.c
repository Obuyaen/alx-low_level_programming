#include "main.h"
/**
 * print_alphabet_x1-prints 10 times the alphabet
*/
void print_alphabet_x1(void)
{
int num;
char ch;
for (num = 0 ; num <= 9 ; num++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);

}
_putchar('\n');
}


}
