#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: input string
 * Return: address of the new element[SUCCESS], NULL[FAILURE]
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *check = *head;

	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}

	while (check->next)
		check = check->next;

	check->next = newNode;

	return (newNode);
}

