#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_len - check the length of strings
*
* @s: string input
*
* Return: string length
*/

int str_len(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}

/**
* cp_mem - copy one string to another
*
* @dest: destination string
* @source: origin string
*
* Return: destination
*/

char *cp_mem(char *dest, char *source)
{
	int i;

	for (i = 0; source[i]; i++)
	{
		dest[i] = source[i];

	}
	dest[i] = '\0';

return (dest);
}

/**
* new_dog - it creates a new dog
*
* @name: name of the dof
* @age: age of the dog
* @owner: owner of the dog
*
* Return: return a pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name;
	char *o = owner;
	float a = age;

	dog_t *ptr;

	if (n != NULL && o != NULL && a > 0)
	{
		ptr = malloc(sizeof(dog_t));

		if (ptr == NULL)
			return (NULL);

		(*ptr).name = malloc(sizeof(char) * (str_len(n) + 1));
		if ((*ptr).name == NULL)
		{
			free((*ptr).name);
			free(ptr);
			return (NULL);
		}

		(*ptr).owner = malloc(sizeof(char) * (str_len(o) + 1));
		if ((*ptr).owner == NULL)
		{
			free((*ptr).owner);
			free(ptr);
			return (NULL);
		}

		ptr->name = cp_mem(ptr->name, n);
		ptr->age = a;
		ptr->owner = cp_mem(ptr->owner, o);

		return (ptr);

	}

return (NULL);
}
