#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry into the program
 * @argc: number of arguments supplied from the command line
 * @argv: array of arguments value
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int ans, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	ans = num1 * num2;


	printf("%d\n", ans);


return (0);
}
