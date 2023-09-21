#include "main.h"
/**
 * cap_string - Capitlize first letter
 *
 * @str: Capitlize first letter
 *
 * Return: pointer
 */

char *cap_string(char *str)
{
int i = 1;

if (str[0] <= 'z' && str[0] >= 'a')
str[i] = str[i] - 32;

for (; str[i] != '\0'; i++)
{
switch (str[i - 1])
{
case ' ':
case '\n':
case '\t':
case '{':
case '}':
case ',':
case ';':
case '.':
case '?':
case '!':
case '"':
case '(':
case ')':
if (str[i] <= 'z' && str[i] >= 'a')
str[i] = str[i] - 32;
break;
}
}
return (str);
}
