#include <stdio.h>
#include "main.h"

/**
* main - Entry point to the program
*
* @argc: stores the number of arg passed from the command line
*
* @argv: store the array of arg passed from the command line
*
* Return: Always 0 (Success)
*/


int main(int argc, char *argv[])
{

	(void) argv; /* un used variable*/

	printf("%d\n", argc - 1);


	return (0);

}

