#include "main.h"
#include <stdio.h>

/**
 * _islower  -  function that checks for lowercase character.
 *@c: sinle letter input
 * Return: 1 if int c is lowercas, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
