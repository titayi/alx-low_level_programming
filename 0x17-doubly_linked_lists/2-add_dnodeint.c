#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: double pointer to the list
 * @n: the data
 *
 * Return: Address of new element or Nullif it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_elem;

	new_elem = malloc(sizeof(dlistint_t));

	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;
	new_elem->prev = NULL;
	new_elem->next = *head;

	if (*head != NULL)
		(*head)->prev = new_elem;
	*head = new_elem;

	return (new_elem);
}
