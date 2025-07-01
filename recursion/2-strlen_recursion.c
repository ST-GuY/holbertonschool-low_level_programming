#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères
 *                     en utilisant la récursion.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: Longueur de la chaîne.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Si le caractère actuel est le caractère nul */
	{
		return (0); /* Fin de la chaîne, retourner 0 */
	}
	else
	{
		/* Ajouter 1 et appeler récursivement sur le caractère suivant */
		return (1 + _strlen_recursion(s + 1));
	}
}
