#ifndef MAIN_H
#define MAIN_H

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




unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);


#endif /* MAIN_H  */
