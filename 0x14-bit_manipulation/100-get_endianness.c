#include "main.h"

/**
* get_endianness - it check endianness
*
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (c[0]);
}
