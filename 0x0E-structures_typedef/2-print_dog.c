#include "main.h"
#include <stdio.h>

/**
* print_dog - print properties of a struct
* @d - pointer to the struct
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");

	char *n = (*d).name;
	float a = (*d).age;
	char *o = (*d).owner;

	if (n == NULL)
		printf("Name: (Nil)");
		else
			printf("Name: %s\n", n);

	if (a == NULL)
		printf("Age: (Nil)");
		else
			printf("Age: %f\n", a);

	if (o == NULL)
		printf("Owner: (Nil)");
		else
			printf("Owner: %s\n", o);

}
