#include "variadic_functions.h"

/**
 * print_all - print any  arguments type
 *
 * @format: seperates the printed strings
 *
 *Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *sep ="", *str;

	va_start(args, format);
	
	if (format)
	{
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(Nil)";
				printf("%s%s", sep, str);
				break;

			default:
				i++;
				continue;
		}
		i++;
		sep = ", ";
	}
	}
	va_end(args);
	printf("\n");

}
