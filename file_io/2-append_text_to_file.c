#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d’un fichier.
 * @filename: Nom du fichier dans lequel écrire.
 * @text_content: Chaîne de caractères
 * (terminée par '\0') à ajouter au fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d’échec.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file; /* Descripteur de fichier */
	int len = 0; /* Longueur du texte à écrire */
	ssize_t written; /* Nombre d'octets écrits */

	/* Vérifie si le nom du fichier est NULL */
	if (filename == NULL)
		return (-1); /* Échec : nom de fichier non fourni */
	/* Ouvre le fichier en mode écriture seule + ajout à la fin */
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1); /* Échec : impossible d’ouvrir le fichier */
	/* Si le contenu à écrire est NULL, on ne fait rien et on retourne 1 */
	if (text_content == NULL)
	{
		close(file); /* On ferme le fichier malgré tout */
		return (1); /* Succès : rien à écrire */
	}
	/* Calcule la longueur de la chaîne text_content */
	while (text_content[len] != '\0')
		len++;
	/* Écrit le contenu dans le fichier */
	written = write(file, text_content, len);
	/* Vérifie que tous les caractères ont bien été écrits */
	if (written == -1 || (ssize_t)written != len)
	{
		close(file); /* Ferme le fichier en cas d'erreur */
		return (-1); /* Échec de l’écriture */
	}
	/* Ferme le fichier après écriture */
	close(file);
	return (1); /* Succès */
}
