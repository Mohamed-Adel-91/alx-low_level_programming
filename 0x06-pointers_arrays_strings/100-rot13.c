#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13
 *
 * @p: pointer to string
 *
 * Return: string
 */

char *rot13(char *p)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWXYZ";

	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUWXYZABCDEFGHIJKLM";

	char *pointer = p;

	while (*p)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*p == rot13[i])
			{
				*p = ROT13[i];
				break;
			}
		}
		p++;
	}
	return (pointer);
}
