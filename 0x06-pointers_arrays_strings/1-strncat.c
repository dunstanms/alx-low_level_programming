#include "main.h"
/**
 * _strncat - use at most n bytes from src
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes of str to concatnate
 *
 * Return: a pointer to str @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
