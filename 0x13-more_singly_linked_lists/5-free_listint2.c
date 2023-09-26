#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Frees a linked list.
 * @head: A pointer to the pointer to the listint_t list that needs to be freed
 *
 * Description: This function free a linked list by iterating through each node
 * and releasing its memory. It also sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
