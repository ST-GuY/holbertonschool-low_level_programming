#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Imprime différents
 * types de données en fonction du format donné.
 * @format: Liste des types d'arguments passés à la fonction.
 *
 * Description: c = char, i = int, f = float, s = string.
 * Si une chaîne est NULL, elle est remplacée par "(nil)".
 * Les types non reconnus sont ignorés.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		printf("%s", sep);

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", (str) ? str : "(nil)");
				break;
			default:
				sep = "";
				i++;
				continue;
		}

		sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}

