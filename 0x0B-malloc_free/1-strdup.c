#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - entry
* @str: str
* Return: array if sucess NULL if not
*/




char *_strdup(char *str)
{
int strSize = 0;
int i = 0;
char *strdup = malloc(sizeof(char) * strSize);

if (str == NULL)
return (NULL);


while (str[i] != '\0')
{
strSize++;
i++;
}


for (i = 0; i < strSize; i++)
{
strdup[i] = str[i];
}
if (strdup == NULL)
return (NULL);
strdup[strSize] = '\0';
return (strdup);

}
