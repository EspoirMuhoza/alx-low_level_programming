#include <stdio.h>
/**
 * print_binary - Function to print decimal as binary
 * @n: our integer
 */

void print_binary(unsigned long int n)
{
	signed long int size_of_char;
	char character;
	int flag;

	size_of_char = sizeof(n) * 8 - 1;

	if (!n)
	{
		printf("0");
		return;
	}

	if (!(n != 1))
	{
		printf("1");
		return;
	}

	flag = 0;

	while (!(size_of_char < 0))
	{
		character = (n >> size_of_char) & 1;

		if (flag == 1)
			putchar(character + '0');
		else
		{
			if (character == 1)
			{
				putchar(character + '0');
				flag = 1;
			}
		}

		size_of_char -= 1;
	}
}
