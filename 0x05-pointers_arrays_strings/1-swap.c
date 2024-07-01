#include "main.h"


/* betty style doc for function swap_int goes there */
/**
 * swap_int - Entry point
 *
 * @a: first arg
 * @b: seconf arg
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
