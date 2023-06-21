#include "main.h"

/**
 * Lnum - return the length of string
 *
 * @n: number
 *
 * Return: number of digit
 */

int Lnum(int n)
{
	int length = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		length += 1;
	}
	return (lenght);
}

/**
 * main - Entry point
 *
 * Description: a program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0 success
 */

int main(void)
{
	int count, init;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000
		, fo1 = 0, fo2 = 0, sumfo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (fo1 > 0)
			printf("%lu", fo1);
		init = Lnum(max) - 1 - Lnum(f1);

		while (fo1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % max;
		sumfo = fo1 + fo2 + (f1 + f2) / max;
		f1 = f2;
		fo1 = fo2;
		f2 = sum;
		fo2 = sumfo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
