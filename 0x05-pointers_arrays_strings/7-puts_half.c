#include "main.h"

/**
 *puts_half - function
 *
 *Description: print the second half of the string
 *
 * @str : the string to print halff
*/

void puts_half(char *str)
{
int counter = 0;
char *counter_ptr = str;
int i;

while (*counter_ptr != '\0')
{
counter_ptr++;
counter++;
}
if (counter % 2 != 0)
{
for (i = (counter - 1) / 2 + 1; i < counter; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}

for (i = counter / 2; i < counter; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
