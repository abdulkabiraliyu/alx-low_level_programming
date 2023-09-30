#include "main.h"
/**
 * _puts_recursion - function that prints a string followed by a new line
 *
 * @strn: a pointer variable to the input string
 *
 * Return: thsi function does not return any value
 */

void _puts_recursion(char *strn)
{
	if (*strn == '\0')
	{
		_putchar('\n');
	}
	else
	{

	_putchar(*strn);
	_puts_recursion(strn + 1);
	}
}

