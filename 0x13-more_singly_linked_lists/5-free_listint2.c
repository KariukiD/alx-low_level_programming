#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - a function that frees a list
 * @head: head pointer
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

