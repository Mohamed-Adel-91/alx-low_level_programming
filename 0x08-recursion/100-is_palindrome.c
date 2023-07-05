#include "main.h"

/**
 * is_palindrome - a function that
 * returns 1 if a string is a palindrome and 0 if not.
 * find - check char
 * last_char - check last char
 * @t: start char
 * @e: end char
 * @m: mod
 * @s: input char
 * Return: integer
 */

int find(char *s, int t, int e, int m);
int is_palindrome(char *s);

/**
 * last_char - check last char
 * @s: input char
 * Return: integer
 */

int last_char (char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += last_char(s + 1) + 1;
	}
	return (n);
}

/**
 * is_palindrome - a function that
 * returns 1 if a string is a palindrome and 0 if not.
 * @s: input char
 * Return: integer
 */

int is_palindrome(char *s)
{
	int e = last_char(s);

	return (find(s, 0, e - 1, e % 2));
}

/**
 * find - check char
 * @t: start char
 * @e: end char
 * @m: mod
 * @s: input char
 * Return: integer
 */

int find(char *s, int t, int e, int m)
{
	if ((t == e && m != 0) || (t == e + 1 && m == 0))
		return (1);
	else if (s[t] != s[e])
		return (0);
	else
		return (find(s, t + 1, e - 1, m));
}
