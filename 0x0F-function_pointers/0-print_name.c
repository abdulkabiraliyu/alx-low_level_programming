#include "function_pointers.h"

/**
* print_name - print a name
*
* @name: passed parameter
* @f: pointer to a fuction
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(98);

	f(name);
}
