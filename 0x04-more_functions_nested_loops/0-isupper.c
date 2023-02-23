#include "main.h"

/**
 * _isupper - check for uppercase letter
 * @c: character to be checked
 * Return: 1 if c is uppercase, if not then 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
