#include "lists.h"

/**
 * sum_listint - Returns sum of all data (n) of listint_t
 * @head: pointer to the listint_t
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
