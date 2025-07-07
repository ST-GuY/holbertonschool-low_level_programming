#include "main.h"

/**
 * _strdup -Crée une copie allouée dynamiquement d'une chaîne de caractères
 * @str: Chaîne d'entrée à dupliquer
 *
 * Return: Pointeur vers la nouvelle chaîne dupliquée,
 *         ou NULL si l'entrée est NULL ou si malloc échoue.
 */

char *_strdup(char *str)
{
	int i; /* Compteur pour la boucle de copie */
	char *array; /* Pointeur vers la mémoire allouée pour la copie */
	int count = 0; /* Variable pour compter la taille de la chaîne */

	if (str == NULL) /* Vérifie si le pointeur d'entrée est NULL */
	{
		return (NULL); /* Retourne NULL si str est invalide */
	}

	while (str[count] != '\0') /* Compte le nombre de caractères dans str */
	{
		count++; /* Incrémente le compteur tant que ce n'est pas la fin de chaîne*/
	}

	array = malloc((count + 1) * sizeof(char));
	/* Alloue de la mémoire pour la nouvelle chaîne (+1 pour '\0') */

	if (array == NULL) /* Vérifie si malloc a échoué */
	{
		return (NULL); /* Retourne NULL si l'allocation a échoué */
	}

	for (i = 0; i < count; i++) /* Copie chaque caractère de str vers array */
	{
		array[i] = str[i]; /* Affecte le caractère courant */
	}

	array[count] = '\0'; /* Ajoute le caractère de fin de chaîne manuellement */

	return (array); /* Retourne le pointeur vers la nouvelle chaîne */
}
