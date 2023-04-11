#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d integer grid
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to grid or null
 **/
int **alloc_grid(int width, int height)
{
	int **gride, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gride = malloc(sizeof(int *) * height);
	if (gride == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		gride[i] = malloc(sizeof(int) * width);
		if (gride[i] == NULL)
		{
			while (--i >= 0)
				free(gride[i]);
			free(gride);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			gride[i][j] = 0;
	}
	return (gride);
}
