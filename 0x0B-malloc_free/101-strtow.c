#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 *
 */

char **strtow(char *str)
{
	int j;

	unsigned int strlen = 0;
	int word_count = 0;
	char **ptr;
	char *tmp_str = str;

	if(str == NULL || str[0] == '\0')
		return (NULL);

	while (*tmp_str != '\0')
	{
		strlen++;
		if (*str == '' || *str == '\t' || *str == '\n' || *str == '\0') 
			word_count++;

		tmp_str++;
	}

	ptr = malloc(sizeof(char *) * (word_count + 1));
	
	for (i = j = 0; i < word_count; i++)
	{
				
		ptr[i] = malloc((word - s + 2) * sizeof(char));
				if (string[i] == NULL)
				{
					free_array(string, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= word; s++, j++)
			string[i][j] = str[s];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);

}
