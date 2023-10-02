#include "main.h"
/**
* _islower -  check if an input character is lower case
*
* @c: input from calling function
*
* Return: return  1 if it is lower case or 0 if not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
