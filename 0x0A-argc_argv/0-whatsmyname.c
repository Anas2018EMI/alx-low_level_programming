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
	printf("%s", argv[0]);
	if (argc >= 0)
	{
		printf("\n");
	}
	return (0);
}
