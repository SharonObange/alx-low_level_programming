#include "lists.h"
#include <stdio.h>

/**
 * loop_listint_length - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t linked list
 * Return: number of nodes, 0 if list is empty.
 */

size_t loop_listint_length(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t num_of_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				num_of_nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				num_of_nodes++;
				tortoise = tortoise->next;
			}

			return (num_of_nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nums_of_nodes, node_index = 0;

	nums_of_nodes = loop_listint_length(head);

	if (nums_of_nodes == 0)
	{
		for (; head != NULL; nums_of_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (node_index = 0; node_index < nums_of_nodes; node_index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nums_of_nodes);
}

