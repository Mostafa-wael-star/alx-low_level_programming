#include "main.h"

/**
 *_isdigit - function
 *
 *Description: Detirmines if input is a digit from 0 to 9
 *
 *@c : the caharacter
 *
 *Return: if it's a digit return 1 otherwise 0
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
