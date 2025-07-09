#include "main.h"
/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à 0
 * @nmemb: nombre d'éléments
 * @size: taille en octets de chaque élément
 *
 * Return: pointeur vers la mémoire allouée ou NULL en cas d'échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr; /* Pointeur pour parcourir la mémoire allouée */
	unsigned int i; /* Compteur pour la boucle */

	if (nmemb == 0 || size == 0) /* Vérifie si les paramètres sont valides */
		return (NULL);

	ptr = malloc(nmemb * size); /* Alloue la mémoire */

	if (ptr == NULL) /* Vérifie si l'allocation a échoué */
		return (NULL);

	for (i = 0; i < (nmemb * size); i++) /* Initialise chaque octet à 0 */
		ptr[i] = 0;

	return (ptr);	/* Retourne le pointeur vers la mémoire allouée */
}
