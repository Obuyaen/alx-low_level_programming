#include "main.h"
#include<stdlib.h>
/**
 *create_array-creates an array of characters andinitializes it
 *@size:array size
 *@c:character to which the array is assigned to
 *Return:pointer to array, NULL if failed.
*/
char *create_array(unsigned int size, char c)
{
char *string;
unsigned int b;
string = malloc(size of(char) * size);
if (size == 0 || string == NULL)
{
return (NULL);
}
for (b = 0; b < size; b++)
{
string[b] = c;
return (string);
}
}
