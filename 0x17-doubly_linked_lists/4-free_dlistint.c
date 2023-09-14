#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *free_dlistint - free a dlistint list
 *@head: pointer to the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
