#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication of two args
 *
 * @argc: arg count
 * @argv: pointer to array of strings
 *
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int x, y, total;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		total = x * y;
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
