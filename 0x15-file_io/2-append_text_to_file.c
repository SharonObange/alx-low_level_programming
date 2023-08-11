#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*append_text_to_file -  appends text to file
*@filename: file to be appended to
*@text_content: text to use to append
*Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int append_text;
	int text_len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[text_len] != '\0')
		text_len++;

	append_text = write(file, text_content, text_len);

	close(file);

	if (append_text != text_len)
	{
		return (-1);
	}

	return (1);
}
