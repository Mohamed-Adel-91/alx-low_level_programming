#include "main.h"

/**
 * *argstostr - a function that concatenates all the arguments
 *
 * @ac: argument
 * @av: argument
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, s, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	s = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[s] = av[i][j];
			s++;
		}
		str[s] = '\n';
		s++;
	}
	str[s] = '\0';
	return (str);
	free(str);
}
