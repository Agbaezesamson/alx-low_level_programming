#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - the nodewill return  at a certain index in a linked list
 * @head: first linked list node
 * @index: return the index of the node
 *
 * Return: pointer to the node we're looking for, or NULL
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
