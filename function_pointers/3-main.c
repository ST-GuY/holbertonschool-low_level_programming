#include "3-calc.h"

/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes
 *
 * Description:
 * Ce programme effectue une opération arithmétique
 * simple entre deux entiers.
 * L'opération est déterminée par l'utilisateur
 * via un opérateur (+, -, *, /, %).
 *
 * Return: 0 en cas de succès, ou un code d’erreur (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	int a, b;	/* Déclaration des deux entiers à calculer */
	int (*ptr)(int, int);	/* Pointeur vers la fonction opérationnelle */

	if (argc != 4)	/* Vérifie que l'utilisateur a fourni 3 arguments */
	{
		printf("Error\n");
		exit(98);	/* Quitte avec le code d’erreur 98 */
	}

	a = atoi(argv[1]);	/* Conversion du premier argument en entier */
	b = atoi(argv[3]);	/* Conversion du troisième argument en entier */

	ptr = get_op_func(argv[2]);
	/* Récupère le pointeur vers la fonction correspondant à l'opérateur */

	if (ptr == NULL)	/* Vérifie si l'opérateur est invalide */
	{
		printf("Error\n");
		exit(99);	/* Quitte avec le code d’erreur 99 */
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
		/* Quitte avec le code d’erreur 100 en cas de division/modulo par 0 */
	}

	printf("%d\n", ptr(a, b));
	/* Appelle la fonction via le pointeur et affiche le résultat */
	return (0);
	/* Retourne 0 pour indiquer le succès */
}
