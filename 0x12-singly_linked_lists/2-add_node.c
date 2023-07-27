#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: first node of the list
 *@str: input string
 *Return: the address of the new node added to the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}

