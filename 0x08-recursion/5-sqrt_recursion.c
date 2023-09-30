#include "main.h"
/**
 * _sqrt_number - find the natural square root
 *
 *@n: input number
 *
 *@r: square root
 *
 *Return: return the square root
 */

int _sqrt_number(int n, int r)
{

	if ((r * r) == n)
		return (r);
	if ((r * r) > n)
		return (-1);
	return (_sqrt_number(n, r + 1));
}

/**
 * _sqrt_recursion - square root recursion  function
 *
 *@n: input value
 *
 *Return: an integer
 *
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_number(n, 1));
}

