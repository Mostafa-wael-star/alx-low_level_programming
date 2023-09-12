#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: a program that prints the alphapet
 *10 times
 *
 * Return: Always (0) to be successful
*/

void print_alphabet_x10(void)
{
char c;
int i;

c = 'a';
i = 0;

while (i < 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
c = 'a';
_putchar('\n');
i++;
}
}
