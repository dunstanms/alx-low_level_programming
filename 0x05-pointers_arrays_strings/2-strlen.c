#include "main.h"
/**
 * int _strlen - returns the length of a string
 *
 * @s: string input parameter
 *
 * Return: length of the string
 */
int_strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
