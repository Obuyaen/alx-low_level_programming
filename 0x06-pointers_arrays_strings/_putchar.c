#include "main.h"
#include<unistd>
/**
 *_putchar-writes the character c to the stdout
 *@c:Character to be printed
 *Return:1(success return statement)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
