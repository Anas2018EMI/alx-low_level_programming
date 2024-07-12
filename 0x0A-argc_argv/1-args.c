#include "main.h"
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * @argc: first arg
 * @argv: second arg
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (*argv[0] == '\n' || *argv[0] != '\n')
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
