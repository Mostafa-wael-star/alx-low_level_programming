#include "main.h"

/**
 *print_rev - function
 *
 *Description: function that prints a
 *string, in reverse, followed by a new line.
 *
 * @s : the string to print in reverse
*/

void print_rev(char *s)
{
char *stop = s;

while (*s != '\0')
{
s++;
}
s--;
while (s != stop - 1)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
