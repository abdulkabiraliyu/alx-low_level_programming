#include "lists.h"

/**
* add_node - add a node to the beginning of the list
*
* @head: pointer to head of the list
* @str: list element
*
* Return: pointer to the new head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n
	unsigned int i, len = 0;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		len++;

	new_n->len = len;
	new_n->next = *head;
	*head = new_n;

	return (*head);
}

