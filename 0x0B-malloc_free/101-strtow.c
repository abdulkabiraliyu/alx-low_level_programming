#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	
	unsigned int str_len = 0, w_len = 0;
	unsigned int word_c = 0, j, k, i = 0;
	char **ptr;

	
	if(str == NULL || str[0] == '\0')
		return (NULL);

	while (str[i] != '\0')
	{
		str_len++;
		i++;
	}
	
	
	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}

		if (str[i] != ' ' && (  str[i + 1] ==  ' ' || str[i+1] == '\0'))
				{
					word_c++;
				
				}

	}

	ptr = malloc(sizeof(char *) * (word_c + 1));
	
	for (i = k = 0; i <= str_len; i++)
	{
		
		
		if (str[i] == ' ' && str[i-1] == ' ')
		{

			continue;
		}
		
		if (str[i] != ' ')
		{
			w_len++;
		}

		
		if ((str[i] == ' ' || str[i] == '\0') && str[i-1] != ' ')
		{
			printf("%d\n", w_len);
		
			 ptr[k] = malloc(sizeof(char) * (w_len + 1)); 
				
			
			w_len = 0;

			if (ptr[k] == NULL)
				{
					free(ptr[k]);
					return (NULL);
				}
			k++;
		
		}
	}
	for (i = j = 0; i <= word_c; i++)
	{
		while (str[j] != '\0')
		{
			if (str[j] != ' ')
			{
				ptr[i][k] = str[j];
				j++;
				k++;
				continue;	
			}
			if ((str[j] == ' ' || str[j] == '\0') && str[j-1] != ' ')
			{
				ptr[i][k + 1] = '\n';
				
				break;
			}
			else
			{
				j++;
			}
		}
	}
return (ptr);
}
