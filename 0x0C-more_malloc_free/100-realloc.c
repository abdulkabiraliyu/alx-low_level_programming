#include "main.h"
#include <string.h>

/**
* cp_memory - copy one poiter elements to another
*
* @ptr: pointer 1
* @new_ptr: pointer 2
* @size: size to be copied
*
* Return: pointer to the new copied
*/

void *cp_memory(void *ptr, void *new_ptr, unsigned int size)
{
	unsigned int i;
	char *old = (char *) ptr;
	char *new = (char *) new_ptr;

	for (i = 0; i < size; i++)
	{
		new[i] = old[i];
	}

	return (new);
}

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
	unsigned int size;


		size = old_size < new_size ? old_size : new_size;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}
		new_ptr = cp_memory(ptr, new_ptr, size);
		return (new_ptr);

	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		return (NULL);
	}
		new_ptr = cp_memory(ptr, new_ptr, size);
		return (new_ptr);


}
