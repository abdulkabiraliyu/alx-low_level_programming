#include "main.h"
/**
 * factorial - it finds the factorial of input n
 *
 *@n: input value
 *
 *Return: return the factorial
 *
 *
 *
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));

}
