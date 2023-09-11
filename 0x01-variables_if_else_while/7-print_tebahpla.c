#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A program that prints the alphapets in reverse
 *
 *Return: Always (0) means successful
 *
 */

int main(void)
{

	int ch = 'z';

	for (; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}

