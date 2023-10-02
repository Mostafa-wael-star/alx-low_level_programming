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
if (argc < 3)
{
printf("Error\n");
return (1);
}

printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
