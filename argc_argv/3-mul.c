#include "main.h"

/**
 * main - Multiplie deux nombres fournis en arguments
 * @argc: Le nombre d'arguments passés au programme (y compris le nom)
 * @argv: Un tableau contenant les arguments sous
 * forme de chaînes de caractères
 *
 * Description:
 * Ce programme prend deux entiers passés en ligne de commande,
 * les convertit avec atoi, les multiplie et affiche le résultat.
 * Si le nombre d'arguments est incorrect, il affiche "Error" et retourne 1.
 *
 * Return: 0 si succès, 1 si erreur d'arguments
 */

int main(int argc, char *argv[])
{
	int a;         /* Variable pour stocker le premier nombre */
	int b;         /* Variable pour stocker le deuxième nombre */
	int result;    /* Variable pour stocker le résultat de la multiplication */

	if (argc != 3) /* Vérifie qu'il y a exactement 2 arguments */
	{
		printf("Error\n"); /* Affiche un message d'erreur si le */
							/*nombre d'arguments est incorrect */
		return (1);        /* Retourne 1 pour indiquer une erreur */
	}

	a = atoi(argv[1]); /* Convertit le premier argument en entier */
	b = atoi(argv[2]); /* Convertit le deuxième argument en entier */

	result = a * b;    /* Calcule le produit des deux nombres */

	printf("%d\n", result); /* Affiche le résultat suivi d'une nouvelle ligne */

	return (0);
}
