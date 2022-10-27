#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to listint_t head
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (nodes);
}
