#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print from a to z without e and q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char cr = 'a';

	while (cr <= 'z')
	{
		if (cr == 'e' || cr == 'q')
			cr++;
		putchar(cr);
		cr++;
	}
	putchar('\n');

	return (0);
}
