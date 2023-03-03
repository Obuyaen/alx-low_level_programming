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
int position = 0, i = 0;
while (src[position++])
{
i++;
}
for (position = 0; src[position] && position < n; position++)
{
dest[position] = src[position];
}
for (position = i; position < n; position++)
{
dest[position] = '\0';
}
return (dest);
}

