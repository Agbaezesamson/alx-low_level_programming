#include "lists.h"

/**
 * Function free_listint: Releases the memory occupied by a linked list
 * @head: Pointer to the beginning of the listint_t list to be deallocated
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
