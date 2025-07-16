#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fonction correcte selon l'opérateur passé
 * @s: Pointeur vers une chaîne représentant l’opérateur
 *
 * Description:
 * Cette fonction compare la chaîne `s` avec les opérateurs disponibles,
 * et retourne un pointeur vers la fonction
 * correspondante (addition, soustraction, etc.).
 *
 * Return: Pointeur vers la fonction associée à l’opérateur,
 * ou NULL si invalide
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, /* Association de "+" à la fonction op_add */
		{"-", op_sub}, /* Association de "-" à la fonction op_sub */
		{"*", op_mul}, /* Association de "*" à la fonction op_mul */
		{"/", op_div}, /* Association de "/" à la fonction op_div */
		{"%", op_mod}, /* Association de "%" à la fonction op_mod */
		{NULL, NULL}   /* Marqueur de fin de tableau */
	};
	int i = 0;
	/* Index de parcours du tableau */

	while (ops[i].op != NULL)
	/* Parcours tant que l’opérateur courant n’est pas NULL */
	{
		if (strcmp(s, ops[i].op) == 0)
		/* Si l'opérateur passé correspond à celui du tableau */
		{
			return (ops[i].f);
			/* Retourne le pointeur vers la fonction correspondante */
		}
		i++; /* Incrémentation de l’index */
	}

	return (NULL); /* Si aucun opérateur ne correspond, retourne NULL */
}
