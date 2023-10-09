#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using
*
* @b: input size parameter
*
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
return (ptr);
}
