#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 *_strdup-new allocated memory space with a copy of string
 *@str:character
 *Return:0
*/
char *_strdup(char *str)
{
char *string;
int b, c;
if (string == NULL)
{
return (NULL);
}
b = 0;
while (str[b] != '\0')
{
b++;
}
string = malloc(sizeof(char) * (b + 1));
if (string == NULL)
{
return (NULL);
}
for (c = 0; str[c]; c++)
{
string[c] = str[c];
}
return (string);
}
