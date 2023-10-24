#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - add node to the beginning of a list
*
* @head: pointer the head
* @n: data to insert in the node
*
* Return: pointer to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
		*head = new_node;

	new_node->next = *head;
	*head = new_node;

return (new_node);

}

