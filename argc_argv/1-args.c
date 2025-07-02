#include "main.h"

/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Le nombre total d'arguments
 * @argv: Tableau contenant les arguments (non utilisé ici)
 *
 * Return: 0 (succès)
 */

int main(int argc, char **argv)
{
	(void)argv; /* On ignore argv, car on n'en a pas besoin */

	/* On soustrait 1 à argc pour ne pas compter le nom du programme */
	printf("%d\n", argc - 1);

	return (0);
}
