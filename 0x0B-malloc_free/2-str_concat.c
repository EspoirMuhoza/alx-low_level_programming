#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - my function
 *@s1: my first string
 *@s2: my second string
 * Return: pointer should point to a newly space
 */
char *str_concat(char *s1, char *s2)
{
	char *kuci = NULL;
	unsigned int w;
	int x1;
	int x2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x1 = 0; s1[x1] != '\0'; x1++)
		;
	for (x2 = 0; s2[x2] != '\0'; x2++)
		;
	kuci = (char *)malloc((x1 + x2 + 1) * sizeof(char));
	if (kuci == NULL)
	{
		return (NULL);
	}
	for (w = 0; s1[w] != '\0'; w++)
		kuci[w] = s1[w];
	for (; s2[count] != '\0'; w++)
	{
		kuci[w] = s2[count];
		count++;
	}
	return (kuci);
}
