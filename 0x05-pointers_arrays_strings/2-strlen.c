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
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
