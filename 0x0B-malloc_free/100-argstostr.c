#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * argstostr - concatenate all arguments to strings
 *
 * @ac: number of arguments passed
 * @av: pointer to arrays of strings
 *
 * Return: a pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int len = 0, j, k = 0, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (*av[i] != '\0')
		{
			len++;
			av[i]++;
		}
		len++;
		i++;

	}

	ptr = malloc(sizeof(char) * (len));

	if (ptr == NULL)
		return (NULL);


	for (j = 0; j < ac; j++)
	{
		while (*av[j] != '\0')
		{
			ptr[k] = *av[j];
			
			av[j]++;

		}

		printf("%s\n", ptr);

		if (j == (ac - 1))
		{
			k++;
			ptr[k] = '\0';
		}
		else
		{
			k++;
			ptr[k]  = '\n';
		}
	}
	return (ptr);
}
