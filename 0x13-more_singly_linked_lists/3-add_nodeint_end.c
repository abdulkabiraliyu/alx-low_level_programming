#include "lists.h"

/**
* add_nodeint_end - add a node to the end of a list
*
* @head: pointer to the first node
* @n: data to be inserted in the node
*
* Return: poiter to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h_ptr, *temp;

	h_ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head  = temp;
		return (temp);
	}

	while (h_ptr->next)
	{
		h_ptr = h_ptr->next;
	}

	h_ptr->next = temp;

return (temp);

}

