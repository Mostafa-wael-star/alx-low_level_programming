#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: a program that prints the alphapet
 *
 * Return: Always (0) to be successful
*/

void print_alphabet(void)
{
char c;

c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
