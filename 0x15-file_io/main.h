#ifndef VAR
#define VAR
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
