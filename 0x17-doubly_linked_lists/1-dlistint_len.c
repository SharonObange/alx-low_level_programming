#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *dlistint_len - counts the number of elements in a list
 *@h: pointer to the head node of the linked list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
