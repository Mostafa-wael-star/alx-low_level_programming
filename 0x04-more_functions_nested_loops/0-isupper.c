#include "main.h"

/**
 *_isupper - function
 *
 *Description : Detirmines if the letter is upper or lower
 *
 *@c : the caharacter
 *
 *Return: if Upper case charachter ruturn (1) if lower case return (0)
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
