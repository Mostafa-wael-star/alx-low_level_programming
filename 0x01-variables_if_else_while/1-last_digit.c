#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that shows the last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;

	if (LastDigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, LastDigit);

	else if (LastDigit < 6)
	{
		printf("Last digit of %i is %i ", n, LastDigit);
		printf("and is less than 6 and not 0\n");
	}
	else if (LastDigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, LastDigit);

	return (0);
}
