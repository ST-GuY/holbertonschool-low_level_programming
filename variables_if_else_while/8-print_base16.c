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
    for (i = 0; i < 16; i++) {
        printf("%x", i);
    }
	putchar('\n');
    return 0;
}
