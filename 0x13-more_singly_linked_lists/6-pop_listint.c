#include "lists.h"

/**
 * pop_listint - Removes the first node from a linked list
 * @head: A pointer to the initial element of the linked list
 *
 * Return: The data contained within the removed element,
 * or 0 if the list is devoid of elements
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
