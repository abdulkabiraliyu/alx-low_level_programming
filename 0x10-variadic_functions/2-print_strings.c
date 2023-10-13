#include "variadic_functions.h"

/**
 * print_numbers - print all the arguments strings
 *
 * @separator: seperates the printed strings
 *@n: number of argument passed
 *
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;


		if (n == 0)
			return;
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";

			printf("%s", str);

		if (i == (n - 1))
			continue;

		if (separator != NULL)
			printf("%c ", *separator);

		}

		printf("\n");

		va_end(args);

}
