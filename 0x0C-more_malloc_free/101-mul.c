#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* check_digit - check if an input is digit or not
*
* @n: input
*
* Return: a digit or error
*
*/

int check_digit(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (!isdigit(n[i]))
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}

	return (atoi(n));
}


/**
* main - multiply two positive numbers
*
* @argc: arg count
* @argv: pointer to array of strings
*
* Return: nothing
*/

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc == 3)
	{
		num1 = check_digit(argv[1]);
		num2 = check_digit(argv[2]);

		result = (num1 * num2);

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

