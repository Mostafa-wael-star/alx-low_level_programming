#include "main.h"

/**
 *_strlen - function
 *
 *Description: returns the length of a string.
 *
 * @s : the string to determine its length
 *
 *Return: the lenght of the string
*/

int _strlen(char *s)
{
int counter = 0;

while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
