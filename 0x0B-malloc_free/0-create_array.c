#include "main.h"

/**
 * *create_array - create array of string
 *
 * @size: size of array
 * @c: input string
 *
 * Return: Pointer of string array
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == NULL || s == 0)
		return (0);
	while (size--)
		s[size] = c;
	return (0);
}
