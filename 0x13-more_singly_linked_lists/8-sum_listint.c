#include "lists.h"
/**
 * sum_listint - free list
 * @head: pointer
 * Return: pointer
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
