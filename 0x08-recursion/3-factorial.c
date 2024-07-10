#include "main.h"

/* betty style doc for function factorial goes there */
/**
 * factorial - Entry point
 *
 * @n: first arg
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
