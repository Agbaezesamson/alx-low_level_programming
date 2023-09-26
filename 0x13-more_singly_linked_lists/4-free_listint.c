#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees the memory occupied by a linked list
 * of type listint_t.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
