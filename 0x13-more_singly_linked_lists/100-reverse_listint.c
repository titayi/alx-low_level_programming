#include "lists.h"

/**
 * reverse_listint - Reverses listint_t
 * @head: Pointer to the listint_t head
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *backward;

	if (head == NULL || *head != NULL)
		return (NULL);
	backward = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}
	(*head)->next = backward;

	return (*head);
}
