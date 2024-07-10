#include "main.h"

/* betty style doc for function checker goes there */
/**
 *  checker- Entry point
 *
 * @n: first arg
 * @i: second arg
 *
 * Return: int
 */
int checker(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (checker(n, i + 1));
}
/* betty style doc for function is_prime_number goes there */
/**
 *  is_prime_number- Entry point
 *
 * @n: first arg
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checker(n, 2));
}
