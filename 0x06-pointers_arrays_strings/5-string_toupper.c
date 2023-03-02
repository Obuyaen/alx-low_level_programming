#include "main.h"
/**
 *string_toupper-changes lowercase to uppercase
 *@str:string to be changed
 *Return:pointer to the changed string
*/
char *string_toupper(char *str)
{
int position = 0;
while (str[position])
{
if (str[position] >= 'a' && str[position] <= 'z')
{
str[position] -= 32;
}
position++;

}
return (str);

}
