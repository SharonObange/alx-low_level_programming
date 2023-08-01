#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at an index of a linked list
 *@head: pointer to the first node of the list
 *@index: the index of the node to be deleted
 *Return: 1 for success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *prevNode = NULL;
	listint_t *currentNode = *head;
	
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}


	for (x = 0; x < index && currentNode != NULL; x++)
	{
		prevNode = currentNode;
		currentNode = currentNode->next;
	}
	if (currentNode == NULL)
	{
		return (-1);
	}

	if (prevNode == NULL)
	{
		*head = currentNode->next;
	}
	else
	{
		prevNode->next = currentNode->next;
	}

	free(currentNode);

	return (1);
}

