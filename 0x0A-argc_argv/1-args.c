#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: integer of arguments passed
 * @argv: list of pointer of arguments passed
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
