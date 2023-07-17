#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @a: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *a)
{
	int y;

	y = 0;

	while (a[y] != '\0')
	{
		y++;
	}

	return (y);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @destination: pointer to the buffer in which we copy the string
 * @source: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *destination, char *source)
{
	int length, x;

	length = 0;

	while (source[length] != '\0')
	{
		length++;
	}

	for (x = 0; x < length; x++)
	{
		destination[x] = source[x];
	}
	destination[x] = '\0';

	return (destination);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
