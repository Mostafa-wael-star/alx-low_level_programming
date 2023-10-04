#include <stdio.h>
#include <stdlib.h>
#include "main.h"



int string_length(char *string);

/**
 * str_concat - string concat
 *
 * @s1: string 1
 * @s2: string 2
 * Return:  string concatinated
 */

char *str_concat(char *s1, char *s2)
{
int i = 0;
int strIndex = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s1 = "";

int newSize = string_length(s1) + string_length(s2) + 1;
char *strConcat = malloc(sizeof(char) * newSize);

for (; i < string_length(s1); strIndex++, i++)
strConcat[strIndex] = s1[i];

for (i = 0; i <= string_length(s2); strIndex++, i++)
strConcat[strIndex] = s2[i];

if (strConcat == NULL)
return (NULL);

return (strConcat);
}

/**
 * string_length - string concat
 *
 * @string: string 1
 * Return:  string length
 */

int string_length(char *string)
{
int l = 0;
int i = 0;
while (string[i] != '\0')
{
i++;
l++;
}
return (l);
}
