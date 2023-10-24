#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
*
* @head: pointer to the head
*
* Return: data from deleted head
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

return (n);

}
