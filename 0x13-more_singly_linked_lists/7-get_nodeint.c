#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the node at a specified index in a linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
