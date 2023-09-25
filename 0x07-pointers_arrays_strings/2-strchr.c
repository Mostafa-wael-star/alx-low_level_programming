#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string
 * @c: the characttger
 *
 * Return: Pointer to the string deest wiht copied text
 *
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (0);
}
