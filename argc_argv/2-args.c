#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
	{
	printf("%d\n", argv[i]);
	}
	return (0);
}
