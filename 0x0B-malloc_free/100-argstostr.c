#include "main.h"
#include<stdlib.h>
/**
 *argstostr-main function
 *@ac:integer input
 *@av:double pointer array
 *Return:0
*/
char *argstostr(int ac, char **av)
{
int a, b, d = 0, c = 0;
char *string;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
c++;
}
c += ac;
string = malloc(sizeof(char) * c + 1);
if (string == NULL)
{
return (NULL);
}
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
string[d] = av[a][b];
d++;
}
if (string[d] == '\0')
{
string[d++] = '\n';
}
}
return (string);
}

