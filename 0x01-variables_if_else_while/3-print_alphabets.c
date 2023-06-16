#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripstion: Function from a to z in lower and upper case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char cl = 'a';
	char CA = 'A';

	while (cl <= 'z')
	{
		putchar(cl);
		cl++;
	}
	while (CA <= 'Z')
	{
		putchar(CA);
		CA++;
	}
	putchar('\n');

	return (0);
}
