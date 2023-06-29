#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: str input
 *
 * Return: *s
*/

char *leet(char *s)
{
	int i, j = 0;
	int x[] = {97, 101, 111, 116, 108};
	int y[] = {65, 69, 79, 84, 76};
	int z[] = {52, 51, 48, 55, 49};

	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == x[i] || s[j] == y[i])
			{
				s[j] = z[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
