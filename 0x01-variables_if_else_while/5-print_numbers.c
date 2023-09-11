#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A program that prints from 0 to 9
 *
 *Return: Always (0) means successful
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	putchar('\n');

	return (0);
}

