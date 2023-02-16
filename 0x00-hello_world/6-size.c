#include <stdio.h>
/**
 * main - entry point
 * Desription - prints the size of various types on a computer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(S)\n", sizeof(char));
	printf("Size of a int: %d byte(S)\n", sizeof(int));
	printf("Size of a long int: %d byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(S)\n", sizeof(long long int));
	printf("Size of a float: %d byte(S)\n", sizeof(float));
}
