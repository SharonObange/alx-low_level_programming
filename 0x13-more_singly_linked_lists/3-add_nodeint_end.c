#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a linked list
 *@head: pointer to the head of the list
 *@n: integer to add
 *Return: the address of the new element, NULL for failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *currentNode = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}

	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}

	currentNode->next = newNode;

	return (newNode);
}
