#include "variadic_functions.h"

/**
 * print_strings - Imprime des chaînes de caractères, séparées par un séparateur
 * @separator: Chaîne utilisée pour séparer les chaînes (peut être NULL)
 * @n: Nombre de chaînes à imprimer
 *
 * Description: Imprime chaque chaîne suivie d’un séparateur (sauf la dernière).
 * Si une chaîne est NULL, affiche (nil). Termine par une nouvelle ligne.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;           /* Liste des arguments variadiques */
	unsigned int i;         /* Compteur de boucle */
	char *str;              /* Pointeur vers chaque chaîne */

	va_start(args, n);      /* Initialise l'accès aux arguments */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);    /* Récupère l'argument suivant */

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");           /* Affiche une nouvelle ligne à la fin */
	va_end(args);           /* Nettoie la liste d'arguments */
}
