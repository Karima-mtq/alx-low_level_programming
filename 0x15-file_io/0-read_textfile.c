#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to readchars
 *
 * Return: actual number of letters read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int l, chars;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	l = read(file, buffer, letters);
	if (l == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	chars = write(STDOUT_FILENO, buffer, l);

	free(buffer);
	close(file);
	if (chars != l)
		return (0);
	return (l);
}
