#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line using only putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
	for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
	putchar('\n');

	return (0);
}

