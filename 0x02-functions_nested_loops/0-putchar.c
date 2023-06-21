#include <main.h>

/**
 * main - Entry Point
 *
 * Description: Write a program that prints _putchar, followed by a new line.
 *
 * Return: 0 success
 */

int main(void)
{
	char str[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(str[c]);
	_putchar('\n');

	return (0);
}
