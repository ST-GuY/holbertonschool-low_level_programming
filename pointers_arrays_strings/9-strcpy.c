#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* Copier chaque caractère de src vers dest, y compris '\0' */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; /* Ajouter le caractère nul à la fin */

    return (dest);
}

