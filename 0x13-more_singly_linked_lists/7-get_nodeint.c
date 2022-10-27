#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of listint_t
 * @head: Pointer to listint_t
 * @index: The index of the node to return
 *
 * Return: Null if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
