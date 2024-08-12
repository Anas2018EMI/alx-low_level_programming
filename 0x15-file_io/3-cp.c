#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
/* betty style doc for function append_text_to_file goes there */
/**
 * error_exit - Entry point
 * @code: first arg
 * @message: second arg
 * @arg: third arg
 * Return: void
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/* betty style doc for function append_text_to_file goes there */
/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd || wr == -1)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (rd == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
