#include "main.h"
/**
 *leet-encodes a string into 1337
 *@a:input string
 *Return:the value of n
*/
char *leet(char *a)
{
int position1 = 0, position2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (a[position1])
{
for (position2 = 0; position2 <= 7; position++)
{
if (a[position1] == leet[position2] || a[position1] - 32 == leet[position2])
{
a[position1] = position2 + '0';
}
position1++;
}
return (a);
}
