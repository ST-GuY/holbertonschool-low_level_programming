#include "main.h"

/**
 * main - Fonction principale qui affiche le nom du programme
 * @argc: Nombre d'arguments passés au programme (non utilisé ici)
 * @argv: Tableau de chaînes contenant les
 * arguments (argv[0] = nom du programme)
 *
 * Return: 0 (succès)
 */
int main(int argc, char **argv)
{
	(void)argc;	/* On ignore argc pour éviter un warning si non utilisé */

	printf("%s\n", argv[0]); /*Affiche nom du programme suivi d'un saut de ligne*/
	return (0);
}
