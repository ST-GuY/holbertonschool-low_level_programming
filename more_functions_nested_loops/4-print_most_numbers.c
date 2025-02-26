#include <unistd.h>

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4.
 */

void print_most_numbers(void)

{
	char numbers[] = "01356789\n";

	_putchar(numbers[0]);

	_putchar(numbers + 1);
}

int main(void)
{
	print_most_numbers();
	return (0);
}

