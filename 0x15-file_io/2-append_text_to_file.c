#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**



  */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t append_text;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fclose(file);
		return (1);
	}

	while (text_content[text_len] != '\0')
		text_len++;

	append_text = fwrite(text_content, sizeof(char), text_len, file);

	fclose(file);

	if (append_text != text_len)
	{
		return (-1);
	}
	
	return (1);
}
