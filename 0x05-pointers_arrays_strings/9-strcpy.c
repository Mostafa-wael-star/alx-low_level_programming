#include "main.h"

/**
 *_strcpy - copy string
 *
 *Description: a function that copies the string pointed to by src,
 *including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 *Return: a string of caharachters
 *
 *@dest : the string to be copied into
 *
 *@src : the string to copy
*/

char *_strcpy(char *dest, char *src)
{
int counter = 0;

while (src[counter])
{
dest[counter] = src[counter];
counter++;
}

return (dest);
}
