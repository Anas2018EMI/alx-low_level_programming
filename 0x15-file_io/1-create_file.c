#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/* betty style doc for function create_file goes there */
/**
 * create_file - Entry point
 *
 * @filename: first arg
 * @text_content: second arg
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fdes, result, result1;
	char *c;
	int char_num = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fdes = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	if (fdes == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
                close(fdes);
                return (1);
        }
	while (*(text_content + char_num))
	{
		char_num++;
	}
	result1 = write(filename, text_content, char_num);
	if (result1 != (ssize_t) char_num || result1 == -1)
	{
		close(fdes);
		return (-1);
	}
	close(fdes);

	return (result1);
}
