#include <stdio.h>

/**
 * main - function that print the name of file that was compiled before
 *
 * Return: positive
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
