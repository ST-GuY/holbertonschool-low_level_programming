#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Affiche une liste de chaînes avec un séparateur.
 * @separator: Chaîne de caractères à afficher entre les chaînes.
 * @n: Nombre de chaînes passées à la fonction.
 *
 * Description: Cette fonction prend une liste de chaînes en arguments
 * et les affiche en les séparant par `separator`. Si `separator` est
 * NULL, il n'est pas affiché. Si une chaîne est NULL, elle est remplacée
 * par "(nil)". Une nouvelle ligne est ajoutée à la fin.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
