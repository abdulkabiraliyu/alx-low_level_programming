#include "main.h"
/**
 * _pow_recursion - returns an integer power of a number
 *
 *@x: input number
 *
 *@y: raise to the power
 *
 * Return: return an integer
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
