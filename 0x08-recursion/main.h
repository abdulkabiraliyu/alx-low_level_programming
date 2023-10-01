#ifndef MAIN_H
#define MAIN_H

char _putchar(char c);
void _puts_recursion(char *strn);
void _print_rev_recursion(char *strn);
int _strlen_recursion(char *strn);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *strn);
int wildcmp(char *strn1, char *strn2);

int check_palindrome( char *strn, char *strn2, int len, int mid);
int check_strn_len(char * strn);

#endif /* MAIN_H */
