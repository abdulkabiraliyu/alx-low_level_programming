#include "main.h"

char *create_buff(char *f);
void close_f(int file_d);

/**
* create_buff - create a buffer and allocated 1024 bytes
*
* @f: buffer name
*
* Return: pointer to the created buffer
*/

char *create_buff(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
return (buff);
}

/**
* close_file - close file descriptor
*
* @file_d: handle to the file to be c;losed.
*/
void close_file(int file_d)
{
	int cl;

	cl = close(file_d);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "error: Can't close file %d\n", file_d);
		exit(100);
	}
}

/**
* main - copies the content of a file to another file
*
* @argv: pointer to argument strings
* @argc: number of arguments
*
* Return: nothing
*/
int main(int argc, char **argv)
{
	int to, from, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

	wr = write(to, buff, rd);

	if (to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	rd = read(from, buff, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}

