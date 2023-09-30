#include "main.h"
/**
 * _strlen_recursion - return the lenght of a string
 *
 * @strn: input string
 *
 *Return: returns an integer number
 *
 *
 *
 */

int _strlen_recursion(char *strn)


{
	if (*strn == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(strn + 1));
	}
}

