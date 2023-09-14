#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint_end - add a node to the end of the linked list
 *@head: pointer to the head node
 *@n: element to add
 *Return: the address of the new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp_node = *head;

		while (temp_node->next != NULL)
			temp_node = temp_node->next;

		new_node->prev = temp_node;
		temp_node->next = new_node;
	}

	return (new_node);
}
