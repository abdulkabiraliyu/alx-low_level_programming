#include "dog.h"
#include <stdlib.h>

/**
* free_dog - it free the dynamic  memory
*
* @d: pointer to the struct dog
*/

void free_dog(dog_t *d)
{
	free(d);
}
