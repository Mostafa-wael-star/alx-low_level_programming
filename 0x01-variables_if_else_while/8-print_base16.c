#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A program that prints hexadecimal numbers
 *
 *Return: Always (0) means successful
 *
 */

int main(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
		putchar(i + 48);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

