#include <sys/stat.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 *create_file - creates a file
 *@filename: the name of the file to create
 *@text_content: string to write to the file
 *Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int filename;
	size_t text_len = 0;
	ssize_t text;

	if (filename == NULL)
		return (-1);

	filename = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;

		text = write(file, text_content, text_len);

		close(file);

		if (text == -1)
			return (-1);
	}

	else
	{
		close(file);
	}

	return (1);
}
