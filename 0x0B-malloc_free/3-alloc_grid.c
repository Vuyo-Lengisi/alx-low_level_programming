#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **twoDim;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * height);

	if (twoDim == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		twoDim[x] = malloc(sizeof(int) * width);

		if (twoDim[x] == NULL)
		{
			for (; x >= 0; x--)
				free(twoDim[x]);

			free(twoDim);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			twoDim[x][y] = 0;
	}
	return (twoDim);
}
