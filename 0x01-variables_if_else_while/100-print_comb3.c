#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints combination of numbers;
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones, tens;


	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (ones == tens || ones < tens)
				continue;
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens + '0' == '8')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
