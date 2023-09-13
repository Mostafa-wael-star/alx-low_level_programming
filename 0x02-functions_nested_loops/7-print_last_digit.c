#include "main.h"


/**
 *print_last_digit - function
 *
 *Description: prints the last digit or a given number
 *
 *Return: the last digit
 *
 *@n: the number to be tested
*/

int print_last_digit(int n)
{
if (n < 0)
{_putchar((-n % 10) + '0');
return ((-n % 10));
}
else
{_putchar((n % 10) + '0');
return ((n % 10));
}
}
