#include "lists.h"
/**
 * pop_listint - free list
 * @head: pointer
 * Return: pointer
 */
int pop_listint(listint_t **head)
{
	int retval = -1;
	listint_t *temp;
	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = temp;
	return (retval);
}
