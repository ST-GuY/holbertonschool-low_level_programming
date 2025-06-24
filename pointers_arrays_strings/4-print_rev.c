#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Description: This function takes a string as input and
 * prints its characters in reverse order using a loop.
 */
int _strlen(char *s)
{
	char *p;

	if (s == NULL)
		return (0);

	p = s;

	while (*p != '\0')
	{
		p++;
	}
		return (p - s);
}

void print_rev(char *s)
{
	int i;
    i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
