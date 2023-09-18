#include "main.h"

/**
 *rev_string - function
 *
 *Description: function that reverses a string.
 *
 * @s : the string to be in reverse
*/

void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int i;

while (*s != '\0')
{
counter++;
s++;
}
s -= counter;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}
