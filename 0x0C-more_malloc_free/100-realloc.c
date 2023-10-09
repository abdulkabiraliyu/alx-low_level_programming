#include "main.h"
#include <string.h>

/**
* _realloc - re allocate a memory space
*
* @ptr: pointer to old space
* @old_size: size of old space allocated
* @new_size: new size to be allocated
*
* Return: pointer to new memory allocated
*
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}

	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr)
		return (NULL);

	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		return (NULL);
	}
	else
	{
		memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
		return (new_ptr);

	}
}
