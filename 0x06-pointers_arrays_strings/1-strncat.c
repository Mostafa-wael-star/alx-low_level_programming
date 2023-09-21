#include "main.h"

/**
 * _strncat - check the code
 *
 * Description: function that concatenates two strings.
 *
 * @dest: the destination pointer
 *
 * @src: the source string
 *
 * @n: a number
 *
 * Return: A pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
char *final = dest;
char *srclenth;
int srclength;
int counter = 0;
while (*srclenth != '\0')
{
srclenth++;
srclength++;
}
while (*dest != '\0')
{
dest++;
}
while (counter < n)
{
*dest = *src;
dest++;
src++;
counter++;
}

*(++dest) = '\0';
return (final);
}
