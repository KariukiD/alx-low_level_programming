#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - a function that frees a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
