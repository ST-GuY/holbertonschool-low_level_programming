#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase letters followed by all uppercase letters
 * using the putchar function, then prints a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch;
int chr;

for (ch = 'a'; ch <= 'z'; ch++)

{
putchar(ch);
}

for (chr = 'A'; chr <= 'Z'; chr++)
{
putchar(chr);
}

putchar('\n');

return (0);
}
