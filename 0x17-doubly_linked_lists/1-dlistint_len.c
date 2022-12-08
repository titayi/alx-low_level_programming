#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked list
 * @h: points to the list
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
