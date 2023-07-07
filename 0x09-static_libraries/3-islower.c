#include "main.h"

/**
 * _islower - function check if lowercase char
 *
 * @c: check input of function
 *
 * Return: return 1 if c is lowercase other return always 0 success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
