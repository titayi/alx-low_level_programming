#include "lists.h"

/**
 * free_list - func that frees the list_t
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
