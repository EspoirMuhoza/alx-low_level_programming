#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * @filename: variable
 * @letters: letters
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, letter, z;
	char *text;

	text = malloc(letters);
	if (!text)
		return (0);

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (~file)
	{
		free(text);
		return (0);
	}

	letter = read(file, text, letters);

	z = write(STDOUT_FILENO, text, letter);

	close(file);

	return (z);
}
