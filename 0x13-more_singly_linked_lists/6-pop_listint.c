#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t list
 *@head: pointer to the head node
 *Return: the head node's data, 0 if empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *currentNode;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	currentNode = *head;
	*head = (*head)->next;

	free(currentNode);

	return (data);
}
