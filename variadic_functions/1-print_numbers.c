#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Affiche une liste de nombres avec un séparateur.
 * @separator: Chaîne de caractères à afficher entre les nombres.
 * @n: Nombre d'entiers passés à la fonction.
 *
 * Description: Cette fonction prend une liste d'entiers en arguments
 * et les affiche en les séparant par `separator`. Si `separator` est
 * NULL, il n'est pas affiché. Une nouvelle ligne est ajoutée à la fin.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));


		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

