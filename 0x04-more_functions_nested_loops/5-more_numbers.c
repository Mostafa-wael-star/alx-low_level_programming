#include "main.h"

/**
 *more_numbers - function
 *
 *Description : functions that prints from 0 to 14 ten times
 *
*/


void more_numbers(void)
{
int i1, i2;

for (i1 = 0; i1 < 10; i1++)
{
for (i2 = 0; i2 < 15; i2++)
{
int ones, tens;
ones = i2 % 10;
tens = i2 / 10;

if (i2 > 9)
_putchar(tens + '0');
_putchar(ones + '0');
}
_putchar('\n');
}
}
