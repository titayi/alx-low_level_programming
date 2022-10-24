#include "lists.h"

/**
 * list_len - func returns No of elements in a linkes list_t
 * #h: Pointer to the list
 *
 * Return: No of elements
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
