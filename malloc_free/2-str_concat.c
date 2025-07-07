#include "main.h"

/**
 * _strncpy - Copie une chaîne de caractères avec une limite de n octets
 * @dest: Pointeur vers la chaîne de destination
 * @src: Pointeur vers la chaîne source à copier
 * @n: Nombre maximum d'octets à copier depuis src
 *
 * Description: Cette fonction copie jusqu'à n caractères de la chaîne src
 * vers la chaîne dest. Si la chaîne source est plus courte que n,
 * la fonction complète dest avec des caractères nuls ('\0').
 * Contrairement à strncpy classique, cette fonction ne garantit pas
 * que dest soit terminée par un '\0' si src a n caractères ou plus.
 *
 * Return: Un pointeur vers la chaîne de destination dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;  /* Variable pour l'index de la boucle */

	/* Copier les caractères de src vers dest tant que */
	/* l'index est inférieur à n et que src[i] n'est pas '\0' */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Remplir le reste de dest avec '\0' si src est plus courte que n */
	for (; i < n; i++)
		dest[i] = '\0';

	/* Retourner le pointeur vers la chaîne de destination */
	return (dest);
}

/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: Chaîne de destination,
 * doit être assez grande pour contenir le résultat
 * @src: Chaîne source à ajouter à la fin de dest
 * La fonction strcat en C sert à concaténer deux chaînes de caractères,
 * c’est-à-dire mettre bout à bout deux chaînes.
 * Return: Pointeur sur la chaîne résultante (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0; /* Index pour parcourir dest */
	int j = 0; /* Index pour parcourir src */

	/* Trouver la fin de la chaîne dest (juste avant le '\0') */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier les caractères de src dans dest à partir de la fin */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère nul de fin à la nouvelle chaîne */
	dest[i] = '\0';

	/* Retourner le pointeur vers dest */
	return (dest);
}

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 *
 */

int _strlen(char *s)
{
	char *p; /* Déclare un pointeur temporaire */

	if (s == NULL) /* Vérifie si le pointeur est NULL */
		return (0);

	p = s; /* Initialise le pointeur temporaire avec le début de la chaîne */

	while (*p != '\0') /* Tant que le caractère pointé */
						/*n'est pas le caractère de fin */
	{
		p++; /* Avance le pointeur d’un caractère */
	}
		return (p - s);  /* Calcule le nombre de caractères en soustrayant*/
						/* l'adresse de début de la chaîne de l'adresse de fin */
}

/**
 * str_concat - concatène deux chaînes de caractères
 * dans une nouvelle mémoire allouée.
 * @s1: première chaîne de caractères.
 * @s2: deuxième chaîne de caractères.
 *
 * Description: Si l'un des paramètres est NULL,
 * il est considéré comme une chaîne vide.
 * La fonction alloue suffisamment de mémoire pour contenir s1 suivi de s2,
 * plus le caractère nul final. Elle retourne un
 * pointeur vers cette nouvelle chaîne.
 * En cas d'échec d'allocation, la fonction retourne NULL.
 *
 * Return: pointeur vers la nouvelle chaîne concaténée, ou NULL si échec.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, total_length;
	/* Déclaration des variables pour les longueurs */
	char *array;/* Pointeur pour la chaîne concaténée */

	if (s1 == NULL)/* Si s1 est NULL, on le considère comme chaîne vide */
	{
		s1 = "";
	}
	if (s2 == NULL)/* Si s2 est NULL, on le considère comme chaîne vide */
	{
		s2 = "";
	}

	len1 = _strlen(s1);/* Calcul de la longueur de s1 */
	len2 = _strlen(s2);/* Calcul de la longueur de s2 */

	total_length = len1 + len2 + 1;/* Taille totale à allouer (s1 + s2 + '\0') */

	array = malloc(total_length * sizeof(char));  /* Allocation dynamique */

	if (array == NULL)/* Vérification de la réussite de l'allocation */
		return (NULL);

	_strncpy(array, s1, _strlen(s1)); /* Copie de s1 dans array */
	_strcat(array, s2);                /* Ajout de s2 à la suite de array */

	return (array);                   /* Retourne la chaîne concaténée */
}
