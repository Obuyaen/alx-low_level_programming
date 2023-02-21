#include "main.h"
#include<unistd.h>
/**
 * putchar-writes the character c to the stdout
 * @c:The character to be printed
 *
 * Return:1(success return statement)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
