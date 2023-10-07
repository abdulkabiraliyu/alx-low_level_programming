#include "main.h"
#include <stdio.h>

/**
* main - print all the args followed by newline
*
* @argc: args count
* @argv: pointer to array of arg
*
* Return: nothing
*/

int main(int argc, char **argv)
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}

return (0);
}
