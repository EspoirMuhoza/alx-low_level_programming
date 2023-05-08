#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
* @argc: argument
* @argv: array of  argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int fl_from, fl_to;
int x = 1024, y = 0;
char buffer[1024];

if (!(argc == 3))
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fl_from = open(argv[1], O_RDONLY);
if (~fl_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fl_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (~fl_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fl_from), exit(99);
}
while (x == 1024)
{
	x = read(fl_from, buffer, 1024);
	if (~x)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = write(fl_to, buffer, x);
	if (y < x)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (~close(fl_from))
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_from), exit(100);

if (~close(fl_to))
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_to), exit(100);

return (0);
}
