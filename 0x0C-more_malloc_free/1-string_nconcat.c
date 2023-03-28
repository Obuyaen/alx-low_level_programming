#include<stdlib.h>
#include "main.h"
/**
 *string_nconcat-concatenates n bytes of astring to anotherstr
 *@s1:string to append
 *@s2:string to concatenate
 *@n:number of n bytes to concatenate from s2 to s1
 *Return:pointer to the resultant string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int a = 0, b = 0, length1 = 0, length2 = 0;
while (s1 && s1[length1])
{
length1++;
}
while (s2 && s2[length2])
{
length2++;
}
if (n < length2)
{
str = malloc(sizeof(char) * (length1 + n + 1));
}
else
{
str = malloc(sizeof(char) * (length1 + length2 + 1));
}
if (!str)
{
return (NULL);
}
while (a < length1)
{
str[a] = s1[a];
a++;
}
while (n < length2 && a < (length1 + n))
{
str[a++] = s2[b++];
}
while (n >= length2 && a < (length1 + length2))
{
str[a++] = s2[b++];
}
str[a] = '\0';
return (str);
}
