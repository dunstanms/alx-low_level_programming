#include "main.h"
/**
 * _strcmp - compare to strings
 * @s1: string parameter
 * @s2: string parameter
 *
 * Return: comparison of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
