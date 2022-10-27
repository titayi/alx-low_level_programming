#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop NULL
 * or the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mikey, *yitati;

	if (head == NULL || head->next == NULL)
		return (NULL);

	mikey = head->next;
	yitati = (head->next)->next;

	while (yitati)
	{
		if (mikey == yitati)
		{
			mikey = head;

			while (mikey != yitati)
			{
				mikey = mikey->next;
				yitati = yitati->next;
			}

			return (mikey);
		}

		mikey = mikey->next;
		yitati = (yitati->next)->next;
	}

	return (NULL);
}
