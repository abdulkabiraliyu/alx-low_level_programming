#include "variadic_functions.h"

/**
 * print_numbers - print all the arguments
 *
 * @separator: seperates the printed values
 *@n: number of argument passed
 *
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator != NULL)
	{
		if (n == 0)
			return;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d , ", va_arg(args, unsigned int));

		}

		va_end(args);

	}
}
