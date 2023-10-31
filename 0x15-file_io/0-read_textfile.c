#include "main.h"
/**
* read_textfile -  reads a text file and prints it to the POSIX standard output
*
* @filename: pointer to the file text to be read
* @letters: amount to be read
*
* Return: wr - number of ytes read or 0 when it fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, rd, wr;
	char *buff;

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	rd = read(file_d, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(file_d);

return (wr);
}
