#include "main.h"

/**
 *_isalpha - functuin
 *
 * Description: it returns 1 if it's an alphabet and 0 otherwise
 *
 * Return: 1 if it's alpha and 0 otherwise
 *
 * @c: character to be checked
*/



int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
