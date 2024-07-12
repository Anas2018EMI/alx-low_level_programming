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
	int i = 0;
	while (i < argc)
	{
		printf("%s\n" , argv[i]);
		i++;
	}
	return (0);
}
