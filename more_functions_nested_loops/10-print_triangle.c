#include "main.h"

/**
 * print_triangle - Affiche un triangle aligné à droite avec des '#'
 * @size: Hauteur du triangle
 *
 * Return: Rien (void)
 */
void print_triangle(int size)
{
	int i; /* Compteur pour les lignes */
	int j; /* Compteur pour les espaces */
	int k; /* Compteur pour les '#' */

	/* Vérifie si la taille du triangle est positive */
	if (size > 0)
	{
		/* Parcourt chaque ligne du triangle */
		for (i = 1; i <= size; ++i)
		{
			/* Affiche les espaces pour l'alignement à droite */
			for (j = 0; j < size - i; ++j)
			{
				_putchar(' ');
			}

			/* Affiche les caractères '#' après les espaces */
			for (k = size - i; k < size; ++k)
			{
				_putchar('#');
			}

			/* Passe à la ligne suivante après chaque ligne */
			_putchar('\n');
		}
	}
	else
	{
		/* Si la taille est nulle ou négative, affiche simplement un saut de ligne */
		_putchar('\n');
	}
}
