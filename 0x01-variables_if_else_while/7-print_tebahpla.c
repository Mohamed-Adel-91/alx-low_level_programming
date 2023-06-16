#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripstion: Function print from z to a
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
