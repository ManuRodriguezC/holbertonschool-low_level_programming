#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - dimensional array
 *@width: an
 *@height: al
 *Return: mat
 */
int **alloc_grid(int width, int height)
{
int **grid = NULL;
int i, j;

if (width <= 0 || height <= 0)
	return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
	return (NULL);

for (i = 0 ; i < height ; i++)
{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
		for (i-- ; i >= 0 ; i--)
			free(grid[i]);
		free(grid);
		return (NULL);
	}
}
for (i = 0 ; i < height ; i++)
	for (j = 0 ; j < width ; j++)
		grid[i][j] = 0;
return (grid);
}
