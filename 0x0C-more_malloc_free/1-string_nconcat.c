#include "main.h"
#include <stdlib.h>


/**
* string_nconcat - concatenate two strings
*
* @s1: input string 1
* @s2: input= string 2
*
* @n: number of characters to be copied from s2
*
* Return: pointer to the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size, i, k, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	if (n >= s2_len)
		n = s2_len;

	size = (s1_len + n) + 1;

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (k = 0; k < n; k++, i++)
	{

		ptr[i] = s2[k];

	}

	ptr[i] = '\0';

return (ptr);
}
