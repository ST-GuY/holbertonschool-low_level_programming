#include "main.h"

/*
 * Programme simple qui affiche tous les arguments passés en ligne de commande.
 * argc : nombre total d'arguments (le nom du programme inclus).
 * argv : tableau des arguments sous forme de chaînes de caractères.
 */

int main(int argc, char **argv)
{
	int i;/* Compteur pour parcourir les arguments */

    for (i = 0; i < argc; i++)/* Boucle sur tous les arguments */
	{
        printf("%s\n", argv[i]);/* Affiche l'argument i suivi d'un saut de ligne */
    }
    return 0;
}
