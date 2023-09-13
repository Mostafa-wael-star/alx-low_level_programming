#include "main.h"

/**
 *print_sign - function
 *
 *Description: prints the sin of a number
 *
 *Return: 1 if positive 0 if 0 -1 if negative
 *
 *@n: the number to be evaluated
*/

int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
