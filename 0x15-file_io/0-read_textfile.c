#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/* betty style doc for function read_textfile goes there */
/**
 * read_textfile - Entry point
 *
 * @filename: first arg
 * @letters: second arg
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdes, result, result1;
	char *c;

	if (filename == NULL)
	{
		return (0);
	}
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		close(fdes);
		return (0);
	}
	result = read(fdes, c, letters);
	if (result == -1)
	{
		free(c);
		close(fdes);
		return (0);
	}
	result1 = write(1, c, result);
	if (result1 != (ssize_t) result || result1 == -1)
	{
		free(c);
		close(fdes);
		return (0);
	}
	free(c);
	close(fdes);

	return (result);
}
