#include<stdio.h>
#include "main.h"
/**
 *main-prints all the arguments it receives.
 *@argc:counts the arguments passed to the function
 *@argv:single dimensional array of strings.
 *Return:0(success return statement)
*/
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
