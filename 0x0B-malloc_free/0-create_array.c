#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - entry
* @size: size of the char
* @c: the char
* Return: array if sucess NULL if not
*/

char *create_array(unsigned int size, char c)
{
char *arrayCreated = malloc(sizeof(char) * size);
unsigned int i;


if (size == 0)
return (NULL);

if (arrayCreated == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arrayCreated[i] = c;
}

return (arrayCreated);
}
