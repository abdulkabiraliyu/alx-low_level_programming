#include "main.h"

/**
* wildcmp - compare wether two strings are identical
* @s1: the first string
* @s2: the second string
* Return: 1 if strings are identical else 0
*
*/

int wildcmp(char *s1, char *s2)
{

if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}

if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
	for ( ; *s1 != '\0'; )
	{
	if (wildcmp(s1 + 1, s2 + 1))
	{
	return (1);
	}
	return (wildcmp(s1, s2 + 1));
	}
}

else
{
return (0);
}
return (0);
}
