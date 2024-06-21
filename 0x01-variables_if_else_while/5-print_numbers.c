#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	for (c = 0; c < 10; c++)
	{
		printf("%i", c);
	}

	putchar(10);
	return (0);

}
