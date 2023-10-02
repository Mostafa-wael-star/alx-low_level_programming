#include "main.h"

/**
 * _strncpy - check the code
 *
 * Description: function that copys two strings.
 *
 * @dest: the destination pointer
 *
 * @src: the source string
 *
 * @n: a number
 *
 * Return: A pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
