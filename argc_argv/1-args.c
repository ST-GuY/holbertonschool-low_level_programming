#include <stdio.h>

/* main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{
	printf("Le premier argument est : %s\n", argv[0]);
	printf("Nombre d'arguments: %d\n", argc -1);
		return (0);
}
