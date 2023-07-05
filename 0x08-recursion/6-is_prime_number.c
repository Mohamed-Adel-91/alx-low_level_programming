#include "main.h"

/**
 * prime - function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @s: input number
 * @n: input number
 * Return: integer
 */

int prime(int n, int s)
{
	if (s >= n && n > 1)
	{
		return (1);
	}
	else if (n % s == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, s + 1));
	}
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: input number
 * Return: integer
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
