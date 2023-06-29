#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: a pointer to destnation input
 * @src: a pointer to source input
 *
 * Return: Pointer to resalution
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest*/
	while (dest[c])
		c++;
	/*src arry*/
	for (c2 = 0; src[c2]; c2++)
		/*append src to dest*/
		dest[c++] = src[c2];

	return (dest);
}
