#include "main.h"
int actual_sqrt_recursion(int n, int a);
/**
 *_sqrt_recursion-returns the natural square root of a number
 *@n:number whose square root is to be calculated.
 *Return:resultant square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (actual_sqrt_recursion(n, 0));
}
/**
 *actual_sqrt_recursion-recurses to find the natural sq.number
 *@n:number whose square root is to be calculated.
 *@a:iterator
 *Return:resultant square root.
*/
int actual_sqrt_recursion(int n, int a)
{
if (a * a > n)
{
return (-1);
}
if (a * a == n)
{
return (a);
}
return (actual_sqrt_recursion(n, a + 1));
}



