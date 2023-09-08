#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that writes the size of variuos Data types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d", sizeof(char));
	printf("Size of a int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long int));
	printf("Size of a long long int: %d", sizeof(long long int));
	printf("Size of a float: %d", sizeof(float));
	return (0);
}
