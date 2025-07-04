#include "main.h"

/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes de caractères
 *
 * Return: 0 si succès, 1 en cas d'erreur
 */

int main(int argc, char *argv[])
{
	int index, check; /* Déclaration des variables pour les boucles */
	int sum = 0; /* Initialisation de la somme à 0 */

	for (index = 1; index < argc; index++) /* Boucle à travers chaque argument */
	{
		for (check = 0; argv[index][check] != '\0'; check++)
		/* Parcours de chaque caractère de l'argument */
		{
			if (!isdigit(argv[index][check]))
			/* Vérifie si le caractère n'est pas un chiffre */
			{
				printf("Error\n"); /* Affiche un message d'erreur */
				return (1); /* Retourne 1 pour indiquer une erreur */
			}
		}
		sum += atoi(argv[index]);
		/* Convertit l'argument en entier et l'ajoute à la somme */
	}
	printf("%d\n", sum); /* Affiche la somme finale */
	return (0); /* Retourne 0 pour indiquer le succès */
}
