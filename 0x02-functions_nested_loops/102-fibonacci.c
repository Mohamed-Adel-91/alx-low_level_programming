#include "main.h"

/**
 * main - Entry Point
 *
 * Description: a program that prints the first 50 Fibonacci numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0,	fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib2 + fib1;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
