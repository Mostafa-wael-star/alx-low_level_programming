#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * @argc: the size of the arguments
 * @argv: the arguments itself
 * Return: always 0 success
*/


int main(int argc, char *argv[])
{
int sum;
int i;

if (argc <= 1)
{
printf("0\n");
return (0);
}


for (i = 0; i < argc; i++)
{
if (*argv[i] <= 'z' && *argv[i] >= 'a')
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%i\n", sum);
return (0);
}
