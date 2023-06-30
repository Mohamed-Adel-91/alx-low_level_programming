#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: integer
 *
 * Return: zero
 */

void print_number(int n)
{
	unsigned int no1;

	no1 = n;

	if (n < 0)
	{
		_putchar('-');
		no1 = -n;
	}

	if (no1 / 10 != 0)
	{
		print_number(no1 / 10);
	}
	_putchar((no1 % 10) + '0');
}
