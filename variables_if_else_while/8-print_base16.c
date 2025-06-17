#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the hexadecimal numbers from 0 to f
 * using a for loop and the %x format specifier.
 *
 * Return: Always 0 (Success)
 */

int main()
{
	int i;
    for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
		putchar (i + '0');
		}
		else if ('a' > 10)
		{
		putchar ('a' + (i - 10));
		}
    }
	putchar('\n');
    return 0;
}
