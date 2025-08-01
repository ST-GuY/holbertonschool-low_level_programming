#include "main.h"
/**
 * create_file - Crée un fichier et y écrit du texte
 * @filename: Nom du fichier à créer
 * @text_content: Chaîne à écrire dans le fichier (NULL pour fichier vide)
 *
 * Return: 1 si succès, -1 si échec
 */
int create_file(const char *filename, char *text_content)
{
	int flags, fd;
	/* flags = options d'ouverture ; fd = descripteur de fichier */

	if (filename == NULL) /* Vérifie que le nom de fichier n'est pas NULL */
		return (-1);      /* Sinon, retourne une erreur */
   
	flags = O_CREAT | O_WRONLY | O_TRUNC;

    /* open() retourne un descripteur de fichier ou -1 en cas d'erreur */
    /* 0600 = permissions rw------- */
	fd = open(filename, flags, 0600);
	if (fd == -1) /* Si l'ouverture échoue */
		return (-1);

	if (text_content != NULL) /* Si du texte est fourni */
	{
	ssize_t written = write(fd, text_content, strlen(text_content));

		if (written == -1) /* Si l'écriture échoue */
		{
			close(fd);     /* Ferme le fichier */
			return (-1);   /* Retourne une erreur */
		}
	}

	close(fd);  /* Ferme le fichier proprement */
	return (1); /* Succès */
}
