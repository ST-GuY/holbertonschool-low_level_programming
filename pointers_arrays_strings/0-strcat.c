#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string, which must be large enough to hold the result.
 * @src: The source string to append to dest.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* Find the end of dest */
    while (dest[i] != '\0')
        i++;

    /* Append src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Add the null terminator */
    dest[i] = '\0';

    return dest;
}
