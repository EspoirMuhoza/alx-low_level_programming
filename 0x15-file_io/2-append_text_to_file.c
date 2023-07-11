#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - MY starting point
 *
 * @filename: filename
 * @text_content: variable
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t l = 0, in = 0;
	char *ptr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (in = 0, ptr = text_content; *ptr; ptr++)
			in++;
		l = write(f, text_content, in);
	}

	if (close(f) == -1 || in != l)
		return (-1);
	return (1);
}
