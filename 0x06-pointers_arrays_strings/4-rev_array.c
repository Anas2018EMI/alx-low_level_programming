#include "main.h"

/* betty style doc for function reverse_array goes there */
/**
 * reverse_array - Entry point
 *
 * @a: first arg
 * @n: second arg
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
