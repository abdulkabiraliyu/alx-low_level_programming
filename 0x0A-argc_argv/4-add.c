#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print addition of numbers args
 *
 * @argc: arg count
 * @argv: pointer to array of strings
 *
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int x = 1, y = 0, total = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	while (x < argc)
	{
		char *arg = argv[x];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
			printf("Error\n");
			return (1);
			}

			arg++;
		}
		y = atoi(argv[x]);
		total += y;
		x++;
	}
	printf("%d\n", total);

	return (0);
}
