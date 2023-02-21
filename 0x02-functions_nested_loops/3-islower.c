#include "main.h"
/**
 *_islower-checks for lower case letters
 *@c:character to be printed
 *Return:1 if entered letter is lowercase ,0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
