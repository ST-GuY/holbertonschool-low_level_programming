#include "main.h"
/**
 * array_range - Crée un tableau d'entiers allant de min à max inclus
 * @min: La valeur minimale (incluse) de la plage
 * @max: La valeur maximale (incluse) de la plage
 *
 * Return: Pointeur vers le tableau créé,
 * ou NULL si min > max ou malloc échoue
 */
int *array_range(int min, int max)
{
	int i;            /* Variable de boucle */
	int *ptr;         /* Pointeur vers le tableau d'entiers */

	if (min > max)    /* Vérifie si la plage est invalide */
	{
		return (NULL); /* Retourne NULL si min est supérieur à max */
	}

	ptr = malloc((max - min + 1) * sizeof(int));
	/* Alloue de la mémoire pour le tableau */

	if (ptr == NULL)  /* Vérifie si l'allocation mémoire a échoué */
	{
		return (NULL); /* Retourne NULL en cas d'échec de malloc */
	}

	i = min;          /* Initialise i à la valeur minimale */
	while (i <= max)  /* Boucle jusqu'à atteindre la valeur maximale */
	{
		ptr[i - min] = 1;
		/* Stocke la valeur 1 à l'index correspondant */
		i++;
	}

	return (ptr);      /* Retourne le pointeur vers le tableau */
}
