#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 *
 * @a: pointer to array
 * @n: number of element
 *
 * Return: null
 */

void reverse_array(int *a, int n)
{
	int z, b, c;

	b = 0;
	c = n - 1;

	while (b < c)
	{
		z = a[b];
		a[b] = a[c];
		a[c] = z;
		b++;
		c--;
	}
}
