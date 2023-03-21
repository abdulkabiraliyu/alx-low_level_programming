#include "main.h"
/**
* main: Entry point
*
* Description: print_alphabet_x10  prints the a-z in lower case 10 times
*
* Return: Success (0)
*/

int main(void)
{
	void print_alphabet_x10(void)
	{
		int n;
		char c;

		for (n = 0; n <= 10; n++)
		{

		for (c = 'a'; c <= 'z' ; c++)
			_putchar(c);


		_putchar('\n');

		}
	}
	return (0);
}

