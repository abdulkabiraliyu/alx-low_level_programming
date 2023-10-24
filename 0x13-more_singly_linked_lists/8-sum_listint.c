#include "lists.h"

/**
* sum_listint - sum all the data in the list
*
* @head: pointer to the list head
*
* Return: the summ of all the data
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

return (sum);
}

