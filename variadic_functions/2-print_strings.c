#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
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