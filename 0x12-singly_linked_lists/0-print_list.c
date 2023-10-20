#include "lists.h"

/**
* print_list - prints the elements in the list
*
* @h: pointer to the head of the list
*
* Return: no. of elements in the list.
*/

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[%d] %s\n", 0, "(Nill)");

		else
			printf("[%d] %s\n", (*h).len, (*h).str);

		h = h->next;
		n++;
	}

return (n);
}
