#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 *
 * @s1: input string one
 * @s2: input string two
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int one = 0, two = 0;
	int i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[one] != '\0')
		one++;
	while (s2[two] != '\0')
		two++;

	string = malloc((one * sizeof(*s1)) + ((two + 1) * sizeof(*s2)));
	if (string == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';

	return (string);
	free(string);
}
