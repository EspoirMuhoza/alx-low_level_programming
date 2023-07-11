#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - My starting point
 *
 * @filename: filename
 * @text_content: variable
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int l = 0, in = 0;
	char *ptr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
