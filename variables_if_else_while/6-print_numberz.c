#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line using only putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

for (i = 0; i < 10; i++)
{
	putchar(i + '0'); /* Convert integer to ASCII character */
}
	putchar('\n'); /* Print a newline */

	return (0);
}

