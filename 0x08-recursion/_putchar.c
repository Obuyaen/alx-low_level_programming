#include "main.h"
#include<unistd.h>
/**
 *_putchar-writes out character c to the stdout
 *@c-character to print
 *Return:1 on success, -1 on error 
*/
int _putchar(char c)
{

return (write(1, &c, 1));

}
