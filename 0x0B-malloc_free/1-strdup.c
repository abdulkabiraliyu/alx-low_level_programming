#include "main.h"
#include "stdlib.h"
/**
 * _strdup - dupplicate a strings into a dynamic memory
 *
 * @str: passed string argument
 *
 * Return: a pointer to dupplicate string
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int j, l = 0;
	char *temp_str = str;

	if (str == NULL)
		return (NULL);

	while (*temp_str != '\0')
	{
		l++;
		temp_str++;
	}

	ptr  = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= (l + 1); j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
