#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
    {
	putchar('+');
	return (1);
    }
	else if (n == 0)
    {
	putchar('0');
	return (0);
    }
	else
    {
	putchar('-');
	return (-1);
    }
}
