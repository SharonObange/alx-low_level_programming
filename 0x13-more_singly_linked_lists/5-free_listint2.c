#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - frees a lisint_t list and sets the head to null
 *@head: pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;

		free(currentNode);

		*head = NULL;
	}
}
