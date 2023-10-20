#include "lists.h"

/**
* add_node_end - add a node to the end of the list
*
* @head: pointer to head of the list
* @str: list element
*
* Return: pointer to the new element
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *tempnode;
	unsigned int i, len = 0;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		len++;

	new_n->len = len;
	new_n->next = NULL;

	tempnode  = *head;

	if (tempnode == NULL)
		*head = new_n;
	else
	{

		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;


		}

		tempnode->next  = new_n;


	}

	return (new_n);
}


