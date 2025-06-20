#include "main.h"
#include <stdio.h>

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
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(min / 10 + '0');
		_putchar(min % 10 + '0');
		_putchar('\n');
		}
	}
}
