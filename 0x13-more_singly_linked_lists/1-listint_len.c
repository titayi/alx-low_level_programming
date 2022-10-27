#include "lists.h"

/**
 * listint_len - Returns No of elements in a linked listint_t
 * @h: Points to the head of listint_t
 *
 * Return: Returns number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
