#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for
* an array, using malloc
*
* @nmemb: count of array elements
* @size: size of each member
*
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb  == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc((nmemb) * size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;

	}


	return (ptr);
}
