#include "main.h"

/**
 * _strspn - entry poiint
 *
 * @s: the strring
 * @accept : the substring
 *
 * Return: number
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
int i2;
unsigned int counter = 0;
for (i = 0; s[i] != ' '; i++)
{
for (i2 = 0; accept[i2] != '\0'; i2++)
{
if (s[i] == accept[i2])
counter++;
}
}
return (counter);
}
