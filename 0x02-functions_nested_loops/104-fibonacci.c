#include"main.h"
/**
* main - Entry point to the program
*
* Description: Computing fibonacci sequence
*
* Return: Always 0 (success)
*/
int main(void)
{
int fib1 = 1, fib2 = 2, fib3, i;
	_putchar(fib1 + '0');
	_putchar(',');
	_putchar(fib2 + '0');
	_putchar(',');
	for (i = 3; i <= 98; i++)
		{
		fib3 = fib1 + fib2;

		printf("%d\n", fib3);
		_putchar(',');
		fib1 = fib2;
		fib2 = fib3;
		}
	_putchar('\n');

	return (0);
}
