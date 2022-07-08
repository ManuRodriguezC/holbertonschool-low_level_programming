#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **allac_agrid - dimensional array
 *@width: an
 *@height: al
 *Return: mat
 */
int **alloc_grid(int width, int height)
{
int **mat = NULL;
int i, j;
int
if (width <= 0 || height <= 0)
	return (NULL);

mat = malloc(sizeof(int *) * height);
if (mat == NULL)
	return (NULL);

for (i = 0 ; i < height ; i++)
{
	mat[i] = malloc(sizeof(int) * width);
	if (mat[i] == NULL)
	{
		for (i-- ; i >= 0 ; i--)
			free(mat[i]);
		free(mat);
		return (NULL);
	}
}
for (i = 0 ; i < height ; i++)
	for (j = 0 ; j < width ; j++)
		mat[i][j] = 0;
return (mat);
}
