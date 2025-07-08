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
 * _strncat - Concatène deux chaînes en ajoutant au plus n octets de src
 * à la fin de dest, et ajoute un caractère nul à la fin du résultat.
 * @dest: Chaîne de destination, modifiée par la fonction.
 * @src: Chaîne source, copiée partiellement dans dest.
 * @n: Nombre maximum de caractères à copier de src.
 *
 * Return: Pointeur vers la chaîne résultante (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Trouve la fin de la chaîne dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copie au plus n caractères de src dans dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajoute le caractère nul final */
	dest[i] = '\0';

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
 * string_nconcat - Concatène deux chaînes de caractères,
 *                  en copiant au plus n octets de s2.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 * @n: Nombre maximum d'octets à copier de s2.
 *
 * Return: Pointeur vers la nouvelle chaîne concaténée,
 * ou NULL en cas d’échec.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;
	char *array; /* Pointeur pour la chaîne concaténée */
	/* Si s1 est NULL, on le considère comme chaîne vide */
	if (s1 == NULL)
	{
		s1 = "";
	}
	/* Si s2 est NULL, on le considère comme chaîne vide */
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Calcul de la longueur de s1 */
	len1 = _strlen(s1);
	/* Calcul de la longueur de s2 */
	len2 = _strlen(s2);

	/* Allocation dynamique de mémoire pour la chaîne concaténée */
	array = malloc(sizeof(char) * (len1 + n + 1));
	/* Vérification de la réussite de l'allocation */
	if (array == NULL)
		return (NULL);
	/* Si n est supérieur ou égal à la longueur de s1, on ajuste len1 */
	if (n >= len1)
	{
		len1 = n;
	}
	/* Si n est supérieur ou égal à la longueur de s2, on ajuste len2 */
	if (n >= len2)
	{
		len2 = n;
	}
	/* Copie de s1 dans array */
	_strncpy(array, s1, _strlen(s1));
	/* Ajout de s2 (jusqu'à n caractères) à la suite de array */
	array[len1] = '\0';
	/*ON s'assure que la chaine et bien terminer aprés ca*/
	_strncat(array, s2, n);
	/* Retourne la chaîne concaténée */
	return (array);
}
