#include <stdio.h>
#include "main.h"

/**
* main - Entry to the program
*
* @argc: number of args passed from command line
*
* @argv: arrays of args passed from command line
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}

return (0);
}

