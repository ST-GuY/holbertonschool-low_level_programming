#include <stdio.h>

/**
 * _puts_recursion - Prints a string recursively, followed by a new line.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}

