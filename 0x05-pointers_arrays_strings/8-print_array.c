#include "main.h"
#include <stdio.h>

/**
 *print_array - function
 *
 *Description: function that prints n elements of an
 *array of integers, followed by a new line.
 * @a :The array
 * @n :The elemnts
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%i", a[i]);
if (i == (n - 1))
break;
printf(", ");
}
putchar('\n');
}
