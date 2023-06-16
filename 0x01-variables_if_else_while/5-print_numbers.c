#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: function print from 0 to 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%i", d);
		d++;
	}
	printf("\n");

	return (0);
}
