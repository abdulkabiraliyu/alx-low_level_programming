#include <stdio.h>
#include <stdlib.h>


/**
* main - print opcodes for the main function
*
* @argc: argument count
* @argv: arrays of pointer to each argument
*
* Return: nothing
*/

int main(int argc, char **argv)
{
	int n_bytes;
	int (*main_ptr)(int, char **);
	unsigned char opcode, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main_ptr = main;

	for (i = 0; i < n_bytes; i++)
	{
		opcode = *(unsigned char *)main_ptr;
		printf("%02x", opcode);

		if (i == n_bytes - 1)
			continue;

		printf(" ");
		main_ptr++;
	}

	printf("\n");

return (0);

}
