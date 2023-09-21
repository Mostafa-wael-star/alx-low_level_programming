#include "main.h"
/**
 * string_toupper - reverse array of integers
 *
 * @str: string to be upper
 *
 * Return: pointer
 */

char *string_toupper(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
if (str[i] <= 'z' && str[i] >= 'a')
str[i] = str[i] - 32;
}
return (str);
}
