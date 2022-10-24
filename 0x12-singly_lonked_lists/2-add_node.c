#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *nstr;
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	nstr = strdup(str);
	if (nstr == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i];)
		i++;

	new->str = nstr;
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);

}
