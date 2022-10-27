#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t
 * @head: Pointer to the address head of the listint_t
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
