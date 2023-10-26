#include "main.h"

/**
 * get_bit - get bit an index
 *
 * @n: number
 * @index: index
 *
 * Return: bit at the particular index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
