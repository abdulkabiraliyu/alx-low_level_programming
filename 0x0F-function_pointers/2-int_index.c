#include "function_pointers.h"

/**
* int_index - searches for an integer in an array
*
* @array: array of integers
* @size: size of the array
* @cmp: pointer to the function that will compare the values
*
* Return: -1 if no element matches
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL)
		exit(98);
	if (size <= 0)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
	}

	return (-1);
}

