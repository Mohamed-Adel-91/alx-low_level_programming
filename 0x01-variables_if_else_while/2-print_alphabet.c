#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripstion: Function from a to z
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
