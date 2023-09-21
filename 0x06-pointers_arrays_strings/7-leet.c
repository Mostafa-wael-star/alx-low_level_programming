#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the changed string.
 */

char *leet(char *str)
{
int i, i2;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (i2 = 0; i2 < 10; i2++)
{
if (str[i] == s1[i2])
{
str[i] = s2[i2];
}
}
}


return (str);
}
