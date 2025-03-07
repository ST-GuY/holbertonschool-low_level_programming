#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
