#include "main.h"

/**
* main - Programme simple qui affiche tous les arguments
* passés en ligne de commande
* @argc: nombre total d'arguments (le nom du programme inclus).
* @argv: tableau des arguments sous forme de chaînes de caractères.
* Return: 0 si le programme s'exécute correctement
*/

int main(int argc, char **argv)
{
	int i; /* Déclaration d'un compteur pour parcourir les arguments */

	for (i = 0; i < argc; i++) /* Boucle pour itérer sur tous les arguments */
	{
		printf("%s\n", argv[i]); /*Affiche l'argument courant*/
	}
	return (0); /* Fin du programme avec un code de sortie 0 (succès) */
}
