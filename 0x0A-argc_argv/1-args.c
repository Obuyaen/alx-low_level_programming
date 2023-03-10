#include<stdio.h>
#include "main.h"
/**
 *main-prints the number of arguments
 *@argc:counts the arguments
 *@argv:single dimensional array of strings
 *Return:0(success return statement)
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
