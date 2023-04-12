#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make a grid
 * @width: widen input
 * @height: heighten input
 *
 * Return: pointer to 2 dim
 */
int **alloc_grid(int width, int height)
{
	int **men;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	men = malloc(sizeof(int *) * height);
	if (men == NULL)
	return (NULL);
	for (x = 0; x < height; x++)
	{
		men[x] = malloc(sixeof(int) * width);
		if (men[x] == NULL)
		{
			for (; x >= 0; x--)
				free(men[x])
					free(men);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width, y++)
		men[x][y] = 0;
	}
	return (men);
}
