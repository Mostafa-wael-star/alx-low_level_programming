#include "main.h"

/**
 *print_square - function
 *
 *Description : functions that prints a square of hashes
 *
 *@size : size of square
 */

void print_square(int size)
{
int i;
int s;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (s = 0; s < size; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
