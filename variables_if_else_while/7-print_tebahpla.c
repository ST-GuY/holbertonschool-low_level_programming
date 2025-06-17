#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse (from 'z' to 'a'),
 * followed by a newline. Uses only the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch;

for (ch = 'z'; ch >= 'a'; ch--)

{
putchar(ch);
}

putchar('\n');
return (0);
}
