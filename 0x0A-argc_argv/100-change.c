#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_change - get number of coins to make change
 *
 * @m: passed amount
 *
 * Return: change
 */

int get_change(int m)
{
	int n = 0;

	while (m > 0)
	{
		n++;
		if (m - 25  >= 0)
		{
			m -= 25;
			continue;
		}
		else if (m - 10 >= 0)
		{
			m -= 10;
			continue;
		}
		else if (m - 5 >= 0)
		{
			m -= 5;
			continue;
		}
		else if (m - 2 >= 0)
		{
			m -= 2;
			continue;
		}
		else if ((m - 1) >= 0)
		{
			m -= 1;
			continue;

		}
	}
	return (n);
}

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: arg count
 * @argv: pointer to array of string arg
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int m, n = 0;

	m = atoi(argv[1]);

	if (argc == 2)
	{
		if (m < 0)
			printf("%d\n", 0);

		n = get_change(m);

		printf("%d\n", n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
