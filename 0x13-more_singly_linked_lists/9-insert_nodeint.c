#include "lists.h"

/**
* insert_nodeint_at_index - find node at a particular index
*
* @head: pointer to fist node
* @idx: index
* @n: data
*
* Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;


	if (idx == 0)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp && (i < idx))
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;

			return (new_node);
		}
		else
			temp = temp->next;

		i++;
	}

return (NULL);

}
