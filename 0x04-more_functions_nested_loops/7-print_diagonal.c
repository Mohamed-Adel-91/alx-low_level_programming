#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int postN, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postN = 1; postN <= n; postN++)
		{
			for (space = 1; space <= postN; space++)
				_putchar(' ');
			_putchar(92); /* is equal to '\' char */
			_putchar('\n');
		}
	}
}
