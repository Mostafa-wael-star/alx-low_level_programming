#include "main.h"
/**
 * times_table - function
 *
 * Desciption: printing time tables
 *
 * Retuurn: no retuurn
*/

void times_table(void)
{
int a, b;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
_putchar((a * b) + '0');
_putchar(' ');
}
_putchar('\n');
}

}
