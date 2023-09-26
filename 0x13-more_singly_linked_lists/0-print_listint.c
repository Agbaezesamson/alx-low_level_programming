#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Outputs all the elements of a linked list
 * @h: Linked list of type listint_t to be printed
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
