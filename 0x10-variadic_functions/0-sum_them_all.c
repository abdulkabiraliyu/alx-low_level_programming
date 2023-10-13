#include "variadic_functions.h"

/**
* sum_them_all - calculate the sum of all the arguments
*
* @n: number of argument passed
*
*Return: sumof all
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;


	if (n == 0)
		return (0);


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);

	}

	va_end(args);

return (sum);
}
