#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the numbers from 0 to 9 separated by ", ",
 * using only the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
