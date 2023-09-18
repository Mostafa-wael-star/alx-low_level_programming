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
char *counter_ptr = src;
int counter = 0;
int i;

while (*counter_ptr != '\0')
{
counter_ptr++;
counter++;
}
counter++;
for (i = 0; i <= counter; i++)
{
dest[i] = src[i];
}
return (dest);
}
