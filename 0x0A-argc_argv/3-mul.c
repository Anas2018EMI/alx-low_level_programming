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
	int a, b;

	if (argc > 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%i\n", a * b);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
