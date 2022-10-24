#include "lists.h"

/**
 * print_list - func that prints all elements of list_t
 * @h: Pointer to the list
 *
 * Return: No of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *elements =  h;
	int i = 0;

	while (elements != NULL)
	{
		if (elements->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", elements->len, elements->str);
		}
		elements = elements->next;
		i++;
	}
	return (i);
}
