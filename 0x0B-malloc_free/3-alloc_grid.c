#include "main.h"
#include<stdlib.h>
/**
 *alloc_grid-nested loop to make grid
 *@width:width input
 *@height:height input
 *Return:pointer to 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
int **arr;
int a, b;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = malloc(sizeof(int *) * height);
if (arr == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
arr[a] = malloc(sizeof(int) * width);
if (arr[a] == NULL)
{
for (; a >= 0; a--)
{
free(arr[a]);
}
free(arr);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
arr[a][b] = 0;
}
}
return (arr);
}
