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
	int d, s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;

	while (src[s] != '\0' && s < d)
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}
