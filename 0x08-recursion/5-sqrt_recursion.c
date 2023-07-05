#include "main.h"

/**
 * _sqrt - function that returns the natural square root of a number
 *
 * @n: input num.
 * @r: squer root.
 * Return: square root of a number
 */

int _sqrt(int n, int r)
{
	if ((r * r) == n)
	{
		return (r);
	}
	else if ((r * r) < n)
	{
		return (_sqrt(n, r + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: input num.
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
