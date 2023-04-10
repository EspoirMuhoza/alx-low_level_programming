#include "main.h"
/**
 * _isalpha - check for alphabet
 * @c: the character
 * Return: 1 if c is character, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
