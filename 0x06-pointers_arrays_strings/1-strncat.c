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
int i = 0, j = 0
while (dest[i++])
{
j++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[j++] = src[i]
}
return (dest);
}
