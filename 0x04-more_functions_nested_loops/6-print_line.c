#include "main.h"

/**
 *print_line - function
 *
 *Description : functions that draws a straight line in the terminal
 *
 *@n : number of lines
*/


void print_line(int n)
{
if (n < 0)
{
_putchar('\n');
return;
}
while (n--)
_putchar('_');
_putchar('\n');
}
