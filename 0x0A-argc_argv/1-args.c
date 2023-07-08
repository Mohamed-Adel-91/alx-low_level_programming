#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: integer of arguments passed
 * @argv: list of pointer of arguments passed
 *
 * Return: Always 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
