#include "main.h"

/**
 * print_sign - print + if n is grater then 0,
 * a function that prints the sign of a number.
 *
 * @n: take input int for function
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero,
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
