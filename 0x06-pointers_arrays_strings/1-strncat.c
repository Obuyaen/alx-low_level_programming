#include "main.h"
/**
 *_strncat-concatenates two strings with n bytes
 *@src:copy from
 *@dest:copy to
 *@n:number of characters to be copied
 *Return:dest
*/
char *_strncat(char *dest, char *src, int n)
{
int m, p;
m = 0;
while (dest[m] != '\0')
{
m++;
}
p = 0;
while (p < n && src[p] != '\0')
{
dest[m] = src[p];
m++;
p++;
}
dest[m] != '0\';
return (*dest);
}
