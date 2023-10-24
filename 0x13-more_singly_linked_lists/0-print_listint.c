#include "lists.h"
#include <stdio.h>

/**
* print_listint -  prints all the elements of a listint_t list
*
* @h: variable pointer to the head of the list
*
* Return: number of elements in the list
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp_ptr;
	size_t count = 0;

	temp_ptr = h;

	while (temp_ptr)
	{
		printf("%d\n", temp_ptr->n);
		count++;
		temp_ptr = temp_ptr->next;
	}

return (count);
}
