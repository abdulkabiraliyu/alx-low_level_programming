#include"main.h"

/**
 * _isalpha - checks if input character is a
 *            lowercase or uppercase letter
 * @c: takes input from other functions
 *
 * Return: return 1 if  it is  true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 ||
	    c >= 65 && c <= 90)
		return (1);
	return (0);
}
