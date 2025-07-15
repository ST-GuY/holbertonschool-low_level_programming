#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Applique une fonction à une chaîne de caractères (nom).
 * @name: Le nom à traiter.
 * @f: Pointeur vers une fonction qui prend un char * en paramètre et ne retourne rien.
 *
 * Description : Cette fonction vérifie que les pointeurs ne sont pas NULL,
 * puis elle appelle la fonction pointée par f en lui passant name.
 * Cela permet d'utiliser différentes fonctions pour afficher ou manipuler le nom.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		/* Appelle la fonction pointée par f en lui passant name en argument */
		f(name);
	}
}
