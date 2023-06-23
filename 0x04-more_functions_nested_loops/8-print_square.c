#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: is the size of square
 *
 * Return: Always 0 Success
 */

void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
      _putchar(35);
    _putchar('\n');
	}
}
