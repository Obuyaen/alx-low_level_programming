#include "main.h"
/**
 *_strncpy-copies a string with n bytes
 *@dest:copy to
 *@src:copy from
 *@n:number of characters to be printed
 *Return:dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j  = 0;
while (src[i++])
{
j++;
}
for (i = 0; src[i] && i < n)
{
dest[i] = src[i];
}
for (i = j; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}