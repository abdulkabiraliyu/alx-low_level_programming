#include "main.h"
/**
 * check_prime - check if a number is prime
 *
 *@n: an input value
 *
 *@d: divisor
 *
 *Return: return 0 or 1
 */

int check_prime(int n, int d)
{
	if (n == 2)
		return (1);
	if (d >= n)
		return (1);
	if ((n % d) == 0)
		return (0);
	return (check_prime(n, d + 1));
}
/**
 * is_prime_number - check if a number is prime number
 *
 *@n: an input value
 *
 *Return: an integer
 *
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
