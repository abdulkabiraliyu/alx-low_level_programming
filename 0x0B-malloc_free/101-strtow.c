#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words.
 *
 * @str: passed string parameter
 *
 * Return: poiter to array
 *
 */

char **strtow(char *str)
{

	char **ptr;
	unsigned int word_c = 0;
	unsigned int i, l, j, k = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
			word_c++;
		}
	}

	ptr = malloc(sizeof(char *) * (word_c + 1));

	if (ptr == NULL || word_c == 0)
	{
		free(ptr);
		return (NULL);
	}

	for (i = j = 0; i < word_c; i++)
	{
		for (k = j; str[k] != '\0'; k++)
		{
			if (str[k] == ' ')
				j++;

			if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			{

				ptr[i] = malloc(sizeof(char) * (k - j + 2));

				if (ptr[i] == NULL)
				{

					for (l = 0; l < k; l++)
					{
						free(ptr[l]);
					}
					free(ptr);
					return (NULL);
				}
				break;

			}

		}
		for (l = 0; j <= k; j++, l++)
		{
			ptr[i][l] = str[j];
		}
		ptr[i][l] = '\0';
	}
	ptr[i] = NULL;

	return (ptr);
}
