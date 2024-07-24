#include <stdio.h>
#include <stdlib.h>
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
	int i, num_bytes;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", func_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
