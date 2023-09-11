#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A program that prints the alphapets in lower case
 *
 *Return: Always (0) means successful
 *
 */

int main(void)
{

	int ch = 'a';

	for (; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

