#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - create a 2 dimentional array
 *
 * @width: number of rows
 * @height: number of columns
 *
 * Return: pointer to the created array
 */

int **alloc_grid(int width, int height)
{
	int j, k;
	int **ptr;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < width ; j++)
	{
		ptr[j] = malloc(sizeof(int) * width);

		if (ptr[j] == NULL)
		{
			for (; j >= 0; j--)
				free(ptr[j]);

			free(ptr);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			ptr[j][k] = 0;
		}
	}

	return (ptr);
}
