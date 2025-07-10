#include "dog.h"

/**
 * str_len - Calcule la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne
 *
 * Return: Longueur de la chaîne (nombre de caractères avant '\0')
 */
int str_len(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
/**
 * str_cpy - Copie une chaîne de caractères
 * @dest: Destination (doit avoir assez d’espace alloué)
 * @src: Source à copier
 *
 * Return: Pointeur vers la destination
 */
char *str_cpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - Crée une nouvelle structure dog_t
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire
 *
 * Return: Pointeur vers une nouvelle structure dog_t,
 *         ou NULL en cas d'échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* Vérifie que les chaînes d'entrée ne sont pas NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Alloue de la mémoire pour la structure dog_t */
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Alloue de la mémoire pour copier le nom */
	d->name = malloc(str_len(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	/* Alloue de la mémoire pour copier le propriétaire */
	d->owner = malloc(str_len(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	/* Copie les chaînes name et owner dans la structure */
	str_cpy(d->name, name);
	str_cpy(d->owner, owner);

	/* Affecte l'âge */
	d->age = age;

	/* Retourne le pointeur vers le nouveau chien */
	return (d);
}
