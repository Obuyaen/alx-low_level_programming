#include "main.h"
/**
 *_strlen-returns the length of a string
 *@s:string
 *Return:String length
*/
int _strlen(char *s)
{

int longinteger = 0;
while (*s != '\0')
{
longinteger++;
s++;
}
return (longinteger);

}


