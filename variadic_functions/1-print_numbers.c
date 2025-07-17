#include "variadic_functions.h"

/**
 * print_numbers - Affiche une liste de nombres
 * entiers séparés par un séparateur donné.
 * @separator: La chaîne de caractères utilisée
 * pour séparer les nombres (peut être NULL).
 * @n: Nombre total d'entiers passés en argument variadique.
 *
 * Description: La fonction utilise les arguments variadiques pour
 * afficher chaque entier passé, séparé par la chaîne `separator`.
 * Si `separator` est NULL, les nombres sont affichés sans séparateur.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;	/* Compteur pour la boucle */

	va_list arguments;	/* Variable pour accéder aux arguments variadiques */

	va_start(arguments, n);	/* Initialise la liste d'arguments après n */

	for (i = 0; i < n; i++)	/* Parcourt chaque argument variadique */
	{
		printf("%d", va_arg(arguments, int));
		/* Récupère et affiche l'entier suivant */

		if (separator != NULL && i < n - 1)
		/* Si séparateur défini et pas dernier élément */
		{
			printf("%s", separator);	/* Affiche le séparateur */
		}
	}
	printf("\n");	/* Saut de ligne après affichage */

	va_end(arguments);	/* Libère la liste d'arguments variadiques */
}

