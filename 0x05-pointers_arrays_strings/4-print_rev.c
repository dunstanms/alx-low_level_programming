#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	{
	int length;

	/*finds the length of string without null character*/
	for (length = 0; s[length] != '\0'; ++length)
		;

	/*print char from the last index as you decrement*/
	for (--length; length >= 0; --length)
		_putchar(s[length]);
	_putchar('\n');
}
