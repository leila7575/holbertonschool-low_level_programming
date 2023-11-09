#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return:
 */
int **alloc_grid(int width, int height)
{
	int w = 0;
	int h = 0;
	int **table;

	if (w <= 0 || h <= 0)
		return (NULL);

	table = malloc(sizeof(int *) * height);

	if (table == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		table[h] = (int *)malloc(sizeof(int *) * width);
		if (table[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(table[w]);
			}
			free(table);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			table[h][w] = 0;
		}
	}
	return (table);
}
