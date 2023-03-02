#include "main.h"
/**
 *_strcmp-compares two string values
 *@s1:string 1
 *@s2:string 2
 *Return:The difference of S1 and S2
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);

}



