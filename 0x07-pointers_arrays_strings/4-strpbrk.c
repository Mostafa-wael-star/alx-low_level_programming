#include "main.h"

/**
 *_strpbrk - entry point
 *
 *@s: string to check
 *
 *@accept: the charachter
 *
 *Return: pointer to s
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}

return ('\0');

}
