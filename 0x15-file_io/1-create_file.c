#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
/**
 *create_file - creates a file
 *@filename: the name of the file to create
 *@text_content: string to write to the file
 *Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	int text_len = 0;
	int text;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	text = write(file, text_content, text_len);

	close(file);

	if (text == -1)
		return (-1);
	
	return (1);
}
