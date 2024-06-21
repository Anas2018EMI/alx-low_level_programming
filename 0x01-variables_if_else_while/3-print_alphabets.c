#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 97;

	for (c = 97; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 65; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar(10);
	return (0);

}
