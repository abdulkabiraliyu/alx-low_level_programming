#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - an entry to the programm
*
* @argc: argument count passed
* @argv: an array of pointers to the argument
*
* Return: nothing
*/

int main(int argc, char **argv)
{
	int num1, num2;
	char *op;
	int (*f_ptr)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op   = argv[2];

	f_ptr = get_op_func(op);

	if (f_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f_ptr(num1, num2));

return (0);
}
