#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - egts the nth node of a linked list
 *@head: head node of the lsit
 *@index: index of the node starting at 0
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int x = 0;

	currentNode = head;

	while (currentNode && x < index)
	{
		currentNode = currentNode->next;
		x++;
	}
	return (currentNode ? currentNode : NULL);
}

