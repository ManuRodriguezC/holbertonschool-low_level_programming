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
unsigned int w, h;
int lenw = 0;
int lenh = 0;

if (width <= 0 || height <= 0)
	return (NULL);

lenw = strlen(width);
lenh = strlen(height);

mat = malloc(sizeof(*mat) * lenh * lenw)

if (!mat)
	return (NULL);

for (w = 0 ; width[w] < width ;)
	for(h = 0 ; height[h] < height ; j++)
		mat[w] = width[w];
mat[w] = height[w][h];
w++;

return (mat);
free(mat);
}
