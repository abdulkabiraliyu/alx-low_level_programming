#include "lists.h"

/**
* get_nodeint_at_index - find node at a particular index
*
* @head: pointer to fist node
* @index: index
*
* Return: pointer to the node if found or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && (i < index))
	{
		temp = temp->next;
		i++;
	}

	if (temp)
		return (temp);

	else
		return (NULL);

}
