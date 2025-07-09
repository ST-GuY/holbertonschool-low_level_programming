#include "main.h"
/**
 * array_range - Crée un tableau d'entiers allant de min à max inclus
 * @min: La valeur minimale (incluse)
 * @max: La valeur maximale (incluse)
 *
 * Return: Pointeur vers le tableau, ou NULL si erreur
 */
int *array_range(int min, int max)
{
	int *ptr;            /* Pointeur vers le tableau d'entiers */
	int i;               /* Variable d'index pour la boucle */

	if (min > max)       /* Vérifie si la plage est invalide */
		return (NULL);   /* Retourne NULL si min est supérieur à max */

	ptr = malloc((max - min + 1) * sizeof(int));/*Allou mémoire pour le tableau*/
	if (ptr == NULL)     /* Vérifie si malloc a échoué */
		return (NULL);   /* Retourne NULL en cas d’échec d’allocation */

	i = 0;               /* Initialise l’index du tableau */
	while (min <= max)   /* Boucle de min à max inclus */
	{
		ptr[i] = min;    /* Stocke la valeur actuelle de min dans le tableau */
		i++;             /* Incrémente l’index du tableau */
		min++;           /* Passe à la valeur suivante */
	}

	return (ptr);        /* Retourne le pointeur vers le tableau créé */
}
