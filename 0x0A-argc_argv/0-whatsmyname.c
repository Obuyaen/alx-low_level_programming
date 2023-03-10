#include <stdio.h>
#include "main.h"
/**
 *main-function to print programme name
 *@argc:count of arguments
 *@argv:single dimensional array of strings
 *Return:0(success return statement)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
