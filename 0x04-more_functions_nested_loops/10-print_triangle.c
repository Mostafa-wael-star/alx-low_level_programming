#include "main.h"

/**
 *print_triangle - function
 *
 *Description : functions that prints triangle of hashes
 *
 *@size : size of triangle
 */

void print_triangle(int size)

{
int a, i, a;

a = 0;
i = size - 1;
while (a < size)
{
i = size - 1 - a;
a = a + 1;
while (i > 0)
{
_putchar(' ');
i--;
}
while (a > 0)
{
_putchar('#');
a--;
}
_putchar('\n');
a++;
}

if (size <= 0)
_putchar('\n');
}
