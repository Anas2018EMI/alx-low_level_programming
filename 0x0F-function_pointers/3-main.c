#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * @argc: first arg
 * @argv: second arg
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);
	bool expr0, expr1, expr2, expr3;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	expr0 = strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0;
	expr1 = strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0;
	if (expr0 && expr1 && strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	expr2 = strcmp(argv[3], "0") == 0;
	expr3 = strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0;
	if (expr2 && expr3)
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	printf("%i\n", f(num1, num2));
	return (0);
}

