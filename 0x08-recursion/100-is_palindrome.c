#include "main.h"
#include "stdio.h"
/**
 * check_palindrome - it checks for palindrome
 *
 * @strn: input string
 * @strn2: input string
 *
 *@len: length of string
 *
 *@mid: position of middle character
 *
 * Return: 1 or 0
 */


int check_palindrome(char *strn, char *strn2, int len,  int mid)
{

	if (len <= mid)
	{
		return (1);
	}
	if (*strn != *strn2)
	{
		return (0);

	}

	return (check_palindrome((strn + 1), (strn2 - 1), --len, mid));

}
/**
 * check_strn_len - check the length of the srting
 *
 * @strn: input string
 *i
 *Return: return the length and position of middle character
 *:
 */

int check_strn_len(char *strn)
{
	if (*strn != '\0')
		return (check_strn_len(strn + 1) + 1);
	return (0);
}
/**
 * is_palindrome - check for palindrome
 *
 *@strn: input string
 *
 *Return: 1 if it is palindrome else return 0
 */

int is_palindrome(char *strn)
{
	int len;

	len = check_strn_len(strn);
		if (len <= 1)
			return (1);
	return (check_palindrome(strn, (strn + (len - 1)), len, len / 2));
}
