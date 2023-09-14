#include "main.h"

/**
 *print_diagonal - function
 *
 *Description : functions that draws a diagonal line in the terminal
 *
 *@n : number of diagonal lines
*/

void print_diagonal(int n)
{
int i, s;
if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{

for (s = 0; s < i + 1 ; s++)
{
if (s == i)
{
_putchar('\\');
break;
}
_putchar(' ');
}
_putchar('\n');
}
}
