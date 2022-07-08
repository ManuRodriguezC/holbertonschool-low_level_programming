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

if (width <= 0 || height <= 0)
	return (NULL);

mat = malloc(sizeof(int *) * (width / 2) * width);
if (!mat)
	return (NULL);

for (i = 0 ; i != width ; i++)
{
	for (j = 0 ; j != height ; j++)
		**mat = mat[i][j];
}
return (mat);
free(mat);
}
