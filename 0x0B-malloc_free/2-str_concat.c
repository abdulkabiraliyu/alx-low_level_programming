#include "main.h"
#include "stdlib.h"

/**
 * str_concat - append two string together
 *
 * @s1: first string passed
 * @s2: second string passed
 *
 * Return: a pointer to the new string formed
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, j, k;
	char *temp_s1  = s1;
	char *temp_s2  = s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*temp_s1 != '\0')
	{
		l1++;
		temp_s1++;
	}

	while (*temp_s2 != '\0')
	{
		l2++;
		temp_s2++;
	}

	ptr = malloc(sizeof(char) * (l1 + l2 + 2));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < l1; j++)
	{
		ptr[j] = s1[j];
	}


	for (k = 0; k <= l2; k++)
	{
		ptr[j] = s2[k];
		j++;
	}

	return (ptr);
}
