#include "lists.h"
#include <string.h>
/**
 * print_list - function that prints all elements in a list
 * @h: singly-linked lists
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
