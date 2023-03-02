#include "main.h"
/**
 * _strcat - appends the src string to dest string
 * overwriting the terminal null byte at end of dest
 *and then adds terminal bite
 * @dest: string to append to
 * @src: string to add
 *
 * Return:a pointer to the final string output
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;

	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}
