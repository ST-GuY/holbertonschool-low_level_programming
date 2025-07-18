#include "variadic_functions.h"
/**
 * print_all - Imprime tous les arguments passés, selon un format donné
 * @format: chaîne contenant les types des arguments à imprimer
 *
 * Types acceptés :
 *   'c' - caractère
 *   'i' - entier
 *   'f' - flottant (float/double)
 *   's' - chaîne de caractères (affiche (nil) si NULL)
 *
 * Tous les autres caractères sont ignorés.
 * Chaque valeur est séparée par une virgule et un espace.
 * Une nouvelle ligne est imprimée à la fin.
 */
void print_all(const char * const format, ...)
{
	int i = 0;                  /* Index pour parcourir le format */
	char *str;                  /* Pointeur pour stocker une chaîne */
	char *sep = "";             /* Séparateur, vide au départ */
	va_list args;               /* Liste des arguments variables */

	va_start(args, format);     /* Initialisation de la liste d'arguments */

	while (format && format[i]) /* Parcours de la chaîne format */
	{
		switch (format[i])      /* Vérifie le type d'argument */
		{
			case 'c':           /* Caractère */
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':           /* Entier */
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':           /* Flottant (float promu en double) */
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':           /* Chaîne de caractères */
				str = va_arg(args, char *);
				if (str == NULL)        /* Gère le cas où la chaîne est NULL */
					printf("%s(nil)", sep);
				else
					printf("%s%s", sep, str);
				break;
			default:            /* Ignore les caractères non pris en charge */
				i++;
				continue;
		}
		sep = ", ";             /* Met le séparateur après la première valeur */
		i++;                    /* Passe au caractère suivant dans format */
	}
	va_end(args);               /* Nettoie la liste d'arguments */
	printf("\n");               /* Imprime un retour à la ligne final */
}
