#include "main.h"
#include "stdlib.h"

/**
 * create_array - craete an array using dynamic memory allocation
 *
 * @size: passed array size
 * @c: initialized with char c
 *
 * Return: a pointer the allocated memory
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int j = 0;

	if (size == 0)
		return (NULL);


	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (j < size)
	{
		ptr[j] = c;
		j++;
	}




	return (ptr);
}
