#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripstion: Function from 0 to 99
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int d1 = 0;
	int d2;

	while (d1 <= 99)
	{
		d2 = d1;

		while (d2 <= 99)
		{
			if (d2 != d1)
			{
				putchar((d1 / 10) + 48);
				putchar((d1 % 10) + 48);
				putchar(' ');
				putchar((d2 / 10) + 48);
				putchar((d2 % 10) + 48);

				if (d1 != 98 || d2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');

	return (0);
}
