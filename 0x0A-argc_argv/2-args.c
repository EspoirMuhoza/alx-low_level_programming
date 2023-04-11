#include "main.h"
#include <stdio.h>
/**
 * main - prints all the args
 * @argv: array of pointers
 * @argc: point to count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
