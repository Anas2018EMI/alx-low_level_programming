#include "main.h"
#include <stdio.h>

/* betty style doc for function print_to_98 goes there */
/**
 * print_to_98 - Entry point
 * @n: First operand
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);		
			n++;
		}
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("98\n");
	}

}
