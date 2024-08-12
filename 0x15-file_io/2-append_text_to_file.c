#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/* betty style doc for function append_text_to_file goes there */
/**
 * append_text_to_file - Entry point
 *
 * @filename: first arg
 * @text_content: second arg
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
