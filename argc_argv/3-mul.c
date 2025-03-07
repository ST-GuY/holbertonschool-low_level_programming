#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	return (0);

}

