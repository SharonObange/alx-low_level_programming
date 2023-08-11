#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**




  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t  num_of_char_read;
	ssize_t num_of_char_written;
	FILE *read_file;

	if (filename == NULL)
		return (0);
	read_file = fopen(filename, "r");

	if (read_file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	num_of_char_read = fread(buffer, sizeof(char), letters, read_file);
	buffer[num_of_char_read] = '\0';
	num_of_char_written = fwrite(buffer, sizeof(char), num_of_char_read, stdout);

	fclose(read_file);
	free(buffer);

	return (num_of_char_written);
}

