#include "main.h"
#include <stdio.h>

/* betty style doc for function print_array goes there */
/**
 * print_array - Entry point
 *
 * @a: first arg
 * @n: second arg
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (counter == n - 1)
		{
			printf("%i", *(a + counter));
		}
		else
		{
			printf("%i, ", *(a + counter));
		}
		counter++;
		
	}
	printf("\n");

}
