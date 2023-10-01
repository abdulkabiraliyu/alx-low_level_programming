#include "main.h"
/**
 * wildcmp - compare two strings whether they are identical
 *
 * @strn1: input string 1
 *
 * @strn2: input string 2
 *
 * Return: 1 if they are idenical, 0 otherwise
 *
 */

int wildcmp(char *strn1, char *strn2)
{
	if (*strn1 == '\0' && *strn2 == '\0')
	{
		return (1);
	}
	if (*strn1 == *strn2)
	{
		return (wildcmp(strn1 + 1, strn2 + 1));
	}
	if (*strn2 == '*')
	{
		return (wildcmp(strn1 + 1, strn2) || wildcmp(strn1, strn2 + 1));
	}


return (0);
}
