#include "main.h"
#include <stdlib.h>

#include <stdio.h>

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
	char *ptr, **tmp_args = av;
	int len = 0, j, m, k = 0, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (*tmp_args[i] != '\0')
		{
			len++;
			tmp_args[i]++;
		}
	
		i++;

	}

	ptr = malloc(sizeof(char) * (len + ac));

	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}
	for (j = m = 0; j < ac; j++)
	{
		
		for (i = 0; av[j][i] !=  '\0'; i++)
		{
			ptr[k] = av[j][i];
			printf("H");
			k++;
		}

		ptr[k]  = '\n';
		

	}
printf("%s", *tmp_args);
	return (ptr);
}
