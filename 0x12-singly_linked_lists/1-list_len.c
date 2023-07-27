#include <stdio.h>
#include "lists.h"

/**
 *list_len - returns the number of elements in a list
 *@h: elements in the list
 *Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}
