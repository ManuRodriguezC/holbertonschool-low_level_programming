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
char *mat = NULL;
int w, h;

if (width <= 0 || height <= 0)
	return (NULL);

mat = malloc(sizeof(*mat) * width * height);

if (!mat)
	return (NULL);

for (w = 0 ; w != width ; w++)
{
	for(h = 0 ; h < height ; h++)
		mat[w] = width[w]height[h];
}
return (mat);
free(mat);
}
