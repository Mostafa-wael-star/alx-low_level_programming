#include "main.h"

/**
 *swap_int - function
 *
 *Description: swaps the values of two integers
 *
 *@a : the first number to swab
 *@b : the second numbr to swab
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
