#include "lists.h"

/**
* listint_len -  prints all the elements of a listint_t list
*
* @h: variable pointer to the head of the list
*
* Return: number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp_ptr;
	size_t count = 0;

	temp_ptr = h;

	while (temp_ptr)
	{
		count++;
		temp_ptr = temp_ptr->next;
	}

return (count);
}
