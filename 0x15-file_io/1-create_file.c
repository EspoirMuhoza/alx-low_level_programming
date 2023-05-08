#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - My function that will creates file.
 * @filename: variable
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int espoir = 0, file;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";


	while (*(text_content + espoir))
	{
		espoir++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (~file)
		return (-1);

	write(file, text_content, espoir);

	return (1);
}
