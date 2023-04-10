#include "main.h"

/**
* _isdigit - a function that check for a digit (0 through 9).
* @c: int to  checked
* Return:  0 or 1 otherwise
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
