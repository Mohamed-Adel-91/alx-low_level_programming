#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: take the input from function
 *
 * Return: 1 if c is a letter, lowercase or uppercase alse 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
