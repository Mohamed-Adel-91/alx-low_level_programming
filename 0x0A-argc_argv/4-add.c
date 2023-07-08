#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if number
 * @num: char
 * Return: 0 if number
 * 1 if not number
 */

int isNum(char num[])
{
	int i, j = strlen(num);

	for (i = 0; i < j; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: integer of arguments passed
 * @argv: list pointer of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, s;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		s = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				s += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", s);
	}
	return (0);
}