#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A program that prints the alphapets in lower case
 *then in upper case
 *
 *Return: Always (0) means successful
 *
 */

int main(void)
{

	int chl = 'a', chu = 'A';

	for (; chl <= 'z'; chl++)
		putchar(chl);

	for (; chu <= 'Z'; chu++)
		putchar(chu);
	putchar('\n');

	return (0);
}

