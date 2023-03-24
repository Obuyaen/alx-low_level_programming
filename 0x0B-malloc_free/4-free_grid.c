#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *free_grid-frees a 2d array created by alloc grid
 *@grid: 2d grid
 *@height: height dimension of grid
*/
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
