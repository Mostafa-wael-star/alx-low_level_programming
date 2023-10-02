#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: a program that determine if a charachter is lower or not
 *
 * @c: is an int
 *
 * Return: Always (0) to be successful
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
