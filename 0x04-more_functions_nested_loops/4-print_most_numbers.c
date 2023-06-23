#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * can only use _putchar twice in your code
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
