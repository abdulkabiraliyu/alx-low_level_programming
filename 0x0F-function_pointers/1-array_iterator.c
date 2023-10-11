#include "function_pointers.h"

/**
* array_iterator - pass each element of array to a given function
*
* @array: passed array
* @size: array size
* @action: a pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		exit(98);

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
