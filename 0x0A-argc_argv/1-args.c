#include <stdio.h>
/**
 * main - an entry into the program
 *
 * @argc: number of argument passed in the command line
 *
 * @argv: array of pointers to strings of the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", (argc - 1));
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
