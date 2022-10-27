#include "lists.h"

/**
 * loop_count - Counts the number of unique nodes
 * in a looped listint_t
 * @head: A pointer to the head of the listint_t
 *
 * Return: If the list is not looped - 0
 * or the number of unique nodes in the list.
 */
size_t loop_count(const listint_t *head)
{
	const listint_t *count1, *count2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	count1 = head->next;
	count2 = (head->next)->next;

	while (count2)
	{
		if (count1 == count2)
		{
			count1 = head;
			while (count1 != count2)
			{
				nodes++;
				count1 = count1->next;
				count2 = count2->next;
			}

			count1 = count1->next;
			while (count1 != count2)
			{
				nodes++;
				count1 = count1->next;
			}

			return (nodes);
		}

		count1 = count1->next;
		count2 = (count2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t
 * @head: A pointer to the head of the listint_t
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_count(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
