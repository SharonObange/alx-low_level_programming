#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint - add a new node at the beginning of a list
 *@head: pointer to the head of the linked list
 *@n: element to add to the list
 *Return: the address of the new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
