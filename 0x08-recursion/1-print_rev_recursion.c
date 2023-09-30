#include "main.h"
/**
 * _print_rev_recursion - this function prints string in reverse order
 *
 *@strn: input string
 *
 * Return: nothing is returned
 */

void _print_rev_recursion(char *strn)
{

	if (*strn != '\0')
	{
		_print_rev_recursion(strn + 1);
		_putchar(*strn);
	}
}
