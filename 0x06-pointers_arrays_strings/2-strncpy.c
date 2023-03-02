#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: copy destination pointer
 * @src: copy pointer source
 * @n: number of bytes  from src copied
 *
 * Return: pointer to resulting value
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
