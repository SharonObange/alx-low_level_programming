#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a linked list
 *@head: pointer to the head of a linked list
 *@n: integer value for the new node
 *Return: the address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

