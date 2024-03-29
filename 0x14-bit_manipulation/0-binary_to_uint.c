#include "main.h"

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;

	return (index);
}

/**
 * _atoi - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
 */
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * binary_to_uint - converts binary to unsigned integer
 *
 * @b: binary strings
 *
 * Return: integer equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len, res = 0, base_mult = 1,  num = 0;

	if (!b)
		return (0);

	len = _strlen(b) - 1;

	for (i = len; i >= 0; i--)
	{
		num = _atoi(b[i]);

		if (num != 0 && num != 1)
			return (0);

		res += num * base_mult;

		base_mult *= 2;

	}

	return (res);

}
