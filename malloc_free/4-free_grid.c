#include <stdlib.h>

/**
 *free_grid - free
 *@**grid: grid.c
 *@height: ramdom
 */
void free_grid(int **grid, int height)
{
int i;
int **grid;
for (i = 0 ; i < height ; i++)
	free(grid[i]);
}
