#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A program that prints the alphapets in lower case
 *except e q
 *Return: Always (0) means successful
 *
 */

int main(void)
{

	int ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

