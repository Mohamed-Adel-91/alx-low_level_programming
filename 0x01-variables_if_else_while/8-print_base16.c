#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripstion: Function from 0 to 9 and a to f
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		putchar(d);

		if (d == 57)
			d += 39;
		d++;
	}
	putchar('\n');

	return (0);
}
