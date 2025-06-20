#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * jack_bauer - Affiche chaque minute de la journée de 00:00 à 23:59.
 *
 * Description:
 * Cette fonction utilise deux boucles imbriquées pour afficher toutes
 * les combinaisons d'heures et de minutes dans une journée entière,
 * au format HH:MM. Chaque minute est affichée sur une nouvelle ligne.
 *
 * Return: Rien (void)
 */

void jack_bauer(void)
{
	int h, min;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min <= 59; min++)
		{
		printf("%02d:%02d\n", h, min);
		}
	}
}
