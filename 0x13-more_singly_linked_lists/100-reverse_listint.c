#include "lists.h"

/**
* reverse_listint - reverses a list
*
* @head: pointer to the head
*
* Return: pointer to the first node in the new list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);

}
