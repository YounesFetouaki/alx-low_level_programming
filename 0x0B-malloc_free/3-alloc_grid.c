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
	int **me;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	me = malloc(sizeof(int *) * height);

	if (me == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		me[i] = malloc(sizeof(int) * width);

		if (me[i] == NULL)
		{
			for (; i >= 0; i--)
				free(me[i]);

			free(me);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			me[i][j] = 0;
	}

	return (me);
}
