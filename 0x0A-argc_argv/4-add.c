#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * @argc: first arg
 * @argv: second arg
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1, a;

	if (argc == 1)
	{
		printf("%i\n", 0);
	}
	while (i < argc)
	{
		if (*argv[i] != '0' && atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		a += atoi(argv[i]);
		i++;
	}

	if (argc != 1)
	{
		printf("%i\n", a);
	}
	return (0);
}
