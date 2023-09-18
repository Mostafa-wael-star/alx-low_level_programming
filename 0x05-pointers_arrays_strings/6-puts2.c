#include "main.h"

/**
 *puts2 - function
 *
 *Description: prints a string every 2, followed by a new line, to stdout.
 *
 * @str : the string to print
*/

void puts2(char *str)
{
char *counterPTR = str;
int counter = 0;
int i;

while (*counterPTR != '\0')
{
counterPTR++;
counter++;
}

for (i = 0; i < counter; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
