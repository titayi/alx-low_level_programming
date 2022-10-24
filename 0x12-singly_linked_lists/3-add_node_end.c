#include "lists.h"

/**
 * add_node_end - func that adds new node at the end of the list_t
 * @head: pointer to the list
 * @str: string to be added
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
	char *dupstr;
	int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dupstr = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i];)
		i++;
	new->str = dupstr;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
