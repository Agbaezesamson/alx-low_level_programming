#include "lists.h"

/**
 * print_listint - A function for displaying all the elements within a linked list
 * @h: A linked list of type listint_t to be printed
 *
 * Return: The count of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
