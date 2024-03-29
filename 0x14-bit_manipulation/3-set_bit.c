#include "main.h"

/**
 * set_bit - set bit at an index
 *
 * @n: number
 * @index: index
 *
 * Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}
