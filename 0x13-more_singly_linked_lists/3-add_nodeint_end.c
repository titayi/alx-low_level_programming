#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the end of listint_t
 * @head: Ponter to the address head of listint_t
 *
 * Return: Address of new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	else
	{
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		return (tmp);
	}
}
