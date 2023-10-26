#include <unistd.h>

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
    unsigned int index = 0;

    while (str[index] != '\0')
        index++;

    return (index);
}

/**
 * _atoi - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
 */
unsigned int _atoi(char c)
{
    return ((unsigned int) c - '0');
}



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
