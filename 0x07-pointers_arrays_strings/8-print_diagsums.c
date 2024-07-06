#include "main.h"
#include <stdio.h>

/* betty style doc for function print_diagsums goes there */
/**
 * print_diagsums - Entry point
 * @a: first arg
 * @size: second atg
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + (size + 1) * i);
		sum2 += *(a + (i + 1) * (size - 1));
		i++;
	}
	printf("%i, %i\n", sum1, sum2);
}
