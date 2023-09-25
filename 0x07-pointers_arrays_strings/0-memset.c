#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: string to cusomize
 * @b: cahracter to replace the s
 * @n: inedx
 *
 * Return: Pointer to the string s wiht number replaced
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
