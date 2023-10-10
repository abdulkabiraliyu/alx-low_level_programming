#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - print properties of a struct dog
* @d - pointer to the struct dog
*/

void print_dog(struct dog *d)
{
	char *n = (*d).name;
	float a = (*d).age;
	char *o = (*d).owner;
			
	
	if (d == NULL)
		exit(98);

	if (n == NULL)
		printf("Name: (Nil)\n");
		else
			printf("Name: %s\n", n);

	if (a <= 0)
		printf("Age: (Nil)\n");
		else
			printf("Age: %f\n", a);

	if (o == NULL)
		printf("Owner: (Nil)\n");
		else
			printf("Owner: %s\n", o);

}
