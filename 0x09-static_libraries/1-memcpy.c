#include "main.h"
/**
 * _memcpy - a function that copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char  *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
