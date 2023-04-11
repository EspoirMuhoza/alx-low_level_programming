#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: array of pointers
 * @argc: count
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int total = 0;

	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z] != '\0'; z++)
		{
			if (argv[y][z] < '0'
			    || argv[y][z] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (x = 1; x < argc; x++)
		total += atoi(argv[x]);
	printf("%d\n", total);
	return (0);
}
