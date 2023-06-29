#include "main.h"

/**
 * _strcmp - a function that compares 2 strings.
 *
 * @s1: string 1 compare
 * @s2: against string 2
 *
 * Return: zero if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, n;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			break;
		}
		else
		{
			n = s1[i] - s2[i];
		}
		i++;
	}

	return (n);
}
