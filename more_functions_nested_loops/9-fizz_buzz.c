#include <stdio.h>

/**
 * main - Programme qui affiche Fizz, Buzz ou FizzBuzz
 * pour les multiples de 3 et 5.
 *
 * Description :
 * - Affiche "Fizz" pour les multiples de 3.
 * - Affiche "Buzz" pour les multiples de 5.
 * - Affiche "FizzBuzz" pour les multiples de 3 et 5.
 * - Affiche le nombre normal sinon.
 * - Affiche les résultats de 1 à 100.
 * Return: 0 (Succès)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++) /* Boucle de 1 à 100 */
	{
		if (i % 3 == 0 && i % 5 == 0) /* Si multiple de 3 et 5 */
			printf("FizzBuzz");
		else if (i % 3 == 0) /* Si multiple de 3 */
			printf("Fizz");
		else if (i % 5 == 0) /* Si multiple de 5 */
			printf("Buzz");
		else /* Sinon, afficher le nombre */
			printf("%d", i);

		if (i < 100) /* Ajouter un espace après chaque élément sauf le dernier */
			printf(" ");
	}

	printf("\n"); /* Aller à la ligne après l'affichage */
	return (0);
}

