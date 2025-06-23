#include "main.h"
#include <stdio.h>

/**
 * main - Imprime les nombres de 1 à 100 avec FizzBuzz
 *
 * Description: Pour les multiples de 3, imprime "Fizz".
 * Pour les multiples de 5, imprime "Buzz".
 * Pour les multiples de 3 et 5, imprime "FizzBuzz".
 * Les autres nombres sont imprimés normalement.
 * Tous les éléments sont séparés par un espace.
 *
 * Return: 0 (Succès)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			{
				printf(" FizzBuzz");
			}
			else if ( i % 3 == 0)
				{
					printf("Fizz ");
				}
					else if (i % 5 == 0)
					{
						printf("Buzz ");
					}
					else
					{
						printf(" %d ", i);	
					}
	}
	printf("\n");
	return (0);
}
