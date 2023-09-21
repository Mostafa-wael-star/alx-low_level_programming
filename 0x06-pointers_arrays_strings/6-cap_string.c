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
if (str[i] <= 'z' && str[i] >= 'a')
{
if (str[i - 1] == ' ' ||
str[i - 1] ==  '\n' ||
str[i - 1] ==  '\t' ||
str[i - 1] ==  '{' ||
str[i - 1] ==  '}' ||
str[i - 1] ==  ',' ||
str[i - 1] ==  ';' ||
str[i - 1] ==  '.' ||
str[i - 1] ==  '?' ||
str[i - 1] ==  '!' ||
str[i - 1] ==  '"' ||
str[i - 1] ==  '(' ||
str[i - 1] ==  ')'
)
{
str[i] = str[i] - 32;
}
}

}
return (str);
}
