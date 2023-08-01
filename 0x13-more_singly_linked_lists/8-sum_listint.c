#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - sums all the data of a linked list
 *@head: head node of the list
 *Return: the sum, 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentNode = head;

	while (currentNode)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);
}
