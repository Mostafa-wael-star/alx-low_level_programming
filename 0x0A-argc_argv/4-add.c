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
printf("%i\n", argc - 1);
return (0);
}


for (i = 1; i < argc; i++)
{
if (*argv[i] <= '9' && *argv[i] >= '0')
{
sum += atoi(argv[i]);
}

else
{
printf("Error\n");
return (1);
}

}
printf("%i\n", sum);
return (0);
}
