#include "main.h"
/**
 *_strlen_recursion-returns the length of a string.
 *@s:string whose length is to be determine.
 *Return:string length
*/
int _strlen_recursion(char *s)
{
int longinteger = 0;
if (*s)
{
longinteger++;
longinteger += _strlen_recursion(s + 1);
}
return (longinteger);
}



