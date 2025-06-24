#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string to be printed
 *
 * Description: This function iterates through each character of the string
 * and prints it using _putchar, followed by a newline character.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
