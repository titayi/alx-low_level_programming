#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of listint_t
 * @head: Ponter to the address of the listint_t head
 * @n: The new node integer
 *
 * Return: The address of new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
