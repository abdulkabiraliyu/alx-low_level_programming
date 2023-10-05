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
	unsigned int str_len, word_c = 0, l, i, j, k = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str_len++;
		i++;
	}

	for (i = 0; i < str_len; i++)
	{

		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			word_c++;
		}
	}

	ptr = (char **)malloc(sizeof(char *) * (word_c + 1));

	if (ptr == NULL)
	{
		return (NULL);

	}

	k = 0;

	for (i = j = 0; i < str_len; i++)
	{
		if (str[i] != ' ')
		{

			ptr[k] = (char *)malloc(sizeof(char) * (str_len + 1));

			if (ptr[k] == NULL)
			{
				for (l = 0; l < k; l++)
				{
					free(ptr[l]);
				}
				free(ptr);
				return (NULL);
			}

			while (str[i] != ' ' && str[i] != '\0')
			{
				ptr[k][j++] = str[i++];
			}

			ptr[k][j] = '\0';
			k++;
			j = 0;
		}
	}

	ptr[word_c] = NULL;

	return (ptr);
}

