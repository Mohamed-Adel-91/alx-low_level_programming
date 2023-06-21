#include "main.h"

/**
 * main - Entry Point
 *
 * Description: program that finds and prints the sum of the even-valued terms
 *
 * Return: 0 success
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float t_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			t_sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%0.0f\n", t_sum);

	return (0);
}
