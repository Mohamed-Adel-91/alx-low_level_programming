#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripstion: Function print two digits from 0 to 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int d1 = 0;
	int d2 = 0;

	while (d1 <= 9)
	{
		while (d2 <= 9)
		{
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1 + 48);
				putchar(d2 + 48);

				if (d1 + d2 != 17)
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
