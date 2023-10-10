#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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

	ptr = malloc(sizeof(dog_t));

	(*ptr).name = n;
	(*ptr).age = a;
	(*ptr).owner = o;

return (ptr);

}
