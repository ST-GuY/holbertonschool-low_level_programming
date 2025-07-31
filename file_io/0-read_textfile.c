#include "main.h"
/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard.
 * @filename: Le nom du fichier à lire.
 * @letters: Le nombre maximum de lettres à lire et à écrire.
 *
 * Return: Le nombre réel de lettres lues et écrites,
 *         ou 0 si une erreur survient (fichier, lecture ou écriture).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;  /* Descripteur de fichier */
	char *buffer;  /* Tampon pour stocker le contenu lu */
	ssize_t read_bytes, written_bytes;/* Nombres de caractères lus et écrits */

	if (filename == NULL)  /* Vérifie que le nom du fichier n'est pas NULL */
		return (0);  /* Retourne 0 si le nom est invalide */

	fd = open(filename, O_RDONLY);  /* Ouvre le fichier en lecture seule */
	if (fd == -1)  /* Vérifie si l'ouverture a échoué */
		return (0);  /* Retourne 0 si le fichier ne peut pas être ouvert */
	buffer = malloc(sizeof(char) * (letters + 1));
	/* Alloue de la mémoire pour lire les données */
	if (buffer == NULL)  /* Vérifie si l'allocation a échoué */
	{
		close(fd);  /* Ferme le fichier pour éviter les fuites */
		return (0);  /* Retourne 0 si malloc a échoué */
	}
	read_bytes = read(fd, buffer, letters);  /* Lit le fichier dans le tampon */
	if (read_bytes == -1)  /* Vérifie si la lecture a échoué */
	{
		free(buffer);  /* Libère la mémoire allouée */
		close(fd);  /* Ferme le fichier */
		return (0);  /* Retourne 0 en cas d'erreur de lecture */
	}
	buffer[read_bytes] = '\0';
	/* Termine le tampon comme une chaîne de caractères (facultatif ici) */
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	/* Écrit le contenu sur la sortie standard */
	if (written_bytes == -1 || written_bytes != read_bytes)
	/* Vérifie que tout a bien été écrit */
	{
		free(buffer);  /* Libère le tampon */
		close(fd);  /* Ferme le fichier */
		return (0);  /* Retourne 0 si une erreur d'écriture s'est produite */
	}
	free(buffer);  /* Libère la mémoire utilisée */
	close(fd);  /* Ferme le fichier */
	return (written_bytes);
	/* Retourne le nombre de caractères effectivement écrits */
}
