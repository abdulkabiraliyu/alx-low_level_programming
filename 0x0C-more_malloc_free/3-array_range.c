#include "main.h"

/**
* array_range - creates an array of integers
*
* @min: input start range
* @max: input end range
*
* Return: pointer to an array
*/

int *array_range(int min, int max)
{

	int *int_ptr;
	int i, j, size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	int_ptr = malloc(sizeof(int) * size);

	if (int_ptr == NULL)
	{
		free(int_ptr);
		return (NULL);
	}

	for (i = min, j = 0; i <= max; i++)
	{
		int_ptr[j] = i;
		j++;
	}
	return (int_ptr);
}
