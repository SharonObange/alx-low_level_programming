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
	if (str == NULL)
		return (NULL);

	/*** Create a new node and allocate memory for it ***/
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	/*** Duplicate the input string str using strdup ***/
	newNode->str = strdup(str);

	/*** Update str field of new node*/
	/*** with duplicated string*/
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	/*** Update len field of the new node*/
	/*** with length of duplicated string*/
	newNode->len = strlen(str);
	newNode->next = *head;     /*** set the 'next' pointer to the new node*/
	/*to point to the current headd of the list*/
	*head = newNode; /*** 'head' pointer to new node*/
	return (newNode);
}
