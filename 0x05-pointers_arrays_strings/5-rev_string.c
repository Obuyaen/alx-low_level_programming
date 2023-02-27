#include "main.h"
/**
 *rev_string-function that reverses a string
 *@s:String to be reversed
 *Return:Reversed string
*/
void rev_string(char *s)
{
char rev = s[0];
int times = 0;
int m;
while (s[times] != '\0')
times++;
for (m = 0; m < times; m++)
{
times--;
rev = s[m];
s[m] = s[times];
s[times] = rev;
}

}


