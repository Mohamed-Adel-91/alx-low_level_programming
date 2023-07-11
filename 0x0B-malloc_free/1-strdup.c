#include "main.h"

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string
 *
 * Return: string
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *string;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	string = malloc((size + 1) * sizeof(*str));
	if (string == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}
	return (string);
	free(string);
}
