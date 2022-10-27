#include "lists.h"
/**
 * get_nodeint_at_index - free list
 * @head: pointer
 * @index: to find nth character
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
