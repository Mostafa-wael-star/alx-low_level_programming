#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte.
 *
 * @dest: destiny of the copy
 * @src: source of the copy
 * @n: inedx
 *
 * Return: Pointer to the string deest wiht copied text
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
