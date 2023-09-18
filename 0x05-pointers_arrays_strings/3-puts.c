#include "main.h"

/**
 *_puts - function
 *
 *Description: prints a string, followed by a new line, to stdout.
 *
 * @str : the string to determine its length
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
