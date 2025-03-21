#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Imprime différents types de données en fonction du format donné.
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
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
			}
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
