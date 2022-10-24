#include "lists.h"
#include <string.h>
/**
 * add_node_end - a function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: a pointer to new head of list, NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *top, *bottom;
	int len_;
	char *string_dup;

	top =  malloc(sizeof(list_t));

	if (top == NULL)
	{
		return (NULL);
	}
	string_dup = strdup(str);
	if (string_dup == NULL)
	{
		free(top);
		return (NULL);
	}

	len_ = 0;
	while (str[len_])
	{
		len_++;
	}

	top->len = len_;
	top->str = string_dup;
	top->next = NULL;

	if (*head == NULL)
	{
		*head = top;
	}
	else
	{
		bottom = *head;
		while (bottom->next != NULL)
			bottom = bottom->next;
		bottom->next = top;
	}
	return (*head);
}
