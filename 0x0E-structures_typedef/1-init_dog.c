#include "dog.h"
#include <stdlib.h>


/**
* init_dog - initialises a struct
*
* @d: struct name
* @name: property 1
* @age: property 2
* @owner: property 3
*
* Return: nothing
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || age <= 0)
		exit(98);


	d->name = name;
	d->age = age;
	d->owner = owner;
}

