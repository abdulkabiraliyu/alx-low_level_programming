#include "lists.h"

/**
* free_listint_safe - free a linked list
*
* @h: pointer to the first node
*
* Return: number of elements in the freed list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;

	return (l);
}

