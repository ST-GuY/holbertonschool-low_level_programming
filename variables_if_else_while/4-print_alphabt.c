#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except 'q' and 'e',
 * using the putchar function followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)

{ if (ch != 'q' && ch != 'e')
putchar(ch);
}

putchar('\n');
return (0);
}
