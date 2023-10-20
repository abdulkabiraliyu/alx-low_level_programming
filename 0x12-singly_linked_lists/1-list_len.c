#include "lists.h"

/**
* list_len - calculate the no. of element in alist
*
* @h: pointer the head of the list
*
* Return: no. of element in the list
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = (*h).next;
		n++;
	}

	return (n);
}


