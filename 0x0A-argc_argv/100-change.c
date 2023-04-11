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
	int array[] = {25, 10, 5, 2, 1};
	int x, wagwan;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	wagwan = atoi(argv[1]);
	if (wagwan < 0)
	{
		printf("0\n");
	}
	for (x = 0; x < 5; x++)
	{
		if (wagwan >= array[x])
		{
			count += (wagwan / array[x]);
			wagwan = wagwan % array[x];
		}
		if (wagwan == 0)
		{
			printf("%d\n", count);
			break;
		}
	}
	return (0);
}
