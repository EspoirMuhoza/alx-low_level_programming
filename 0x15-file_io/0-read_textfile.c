#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - My starting point
 *
 * @filename: filename
 * @letters: variable
 *
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int l, w;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buf);
		return (0);
	}
	l = read(f, buf, letters);
	if (l == -1)
	{
		free(buf);
		close(f);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(f);
	if (w != l)
		return (0);
	return (l);
}
