#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: count bytes
 *
 * Return: pointer to new allocated memory
 * exit with 98 when failuer malloc
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
