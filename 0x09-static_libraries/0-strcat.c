#include "main.h"

/**
 * _strcat - check the code
 *
 * Description: function that concatenates two strings.
 *
 * @dest: the destination pointer
 *
 * @src: the source string
 *
 * Return: A pointer to destination
 */

char *_strcat(char *dest, char *src)
{
char *final = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*(++dest) = '\0';
return (final);
}
