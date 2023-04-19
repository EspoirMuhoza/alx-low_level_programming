#include<stdio.h>
#include<stdlib.h>
/**
 * main- key function
 *@argc: parameters.
 *@argv: parameeters in bytes.
* Description: program to prints opcodes in hexa
* Return: Success
*/
int main(int argc, char *argv[])
{
	int x, y;


	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	y = atoi(argv[1]);
	if (!(y >= 0))
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < y; x++)
	{
		printf("%02hhx", *((char *)main + x));
		if (x < y - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
